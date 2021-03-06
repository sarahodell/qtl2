# maxmarg
#' Find genotypes with maximum marginal probabilities
#'
#' For each individual at each position, find the genotype with the maximum marginal probability.
#'
#' @md
#'
#' @param probs Genotype probabilities, as calculated from
#' [calc_genoprob()].
#' @param map Map of pseudomarkers in `probs`. Used only if `chr` and `pos` are provided.
#' @param minprob Minimum probability for making a call. If maximum
#' probability is less then this value, give `NA`.
#' @param chr If provided (along with `pos`), consider only the single specified position.
#' @param pos If provided (along with `chr`), consider only the single specified position.
#' @param return_char If TRUE, return genotype names as character strings.
#' @param quiet IF `FALSE`, print progress messages.
#' @param cores Number of CPU cores to use, for parallel calculations.
#' (If `0`, use [parallel::detectCores()].)
#' Alternatively, this can be links to a set of cluster sockets, as
#' produced by [parallel::makeCluster()].
#' @param tol Tolerance value; genotypes with probability that are within
#'     `tol` of each other are treated as equivalent.
#'
#' @return If `chr` and `pos` are provided, a vector of
#' genotypes is returned. In this case, `map` is needed.
#'
#' Otherwise, the result is a object like that returned by [viterbi()],
#' A list of two-dimensional arrays of imputed genotypes,
#' individuals x positions. Also includes these attributes:
#' * `crosstype` - The cross type of the input `cross`.
#' * `is_x_chr` - Logical vector indicating whether chromosomes
#'     are to be treated as the X chromosome or not, from input `cross`.
#' * `alleles` - Vector of allele codes, from input
#'     `cross`.
#'
#' @details
#' If multiple genotypes share the maximum probability, one is chosen at random.
#'
#' @seealso [sim_geno()], [viterbi()]
#'
#' @export
#'
#' @examples
#' # load data and calculate genotype probabilities
#' iron <- read_cross2(system.file("extdata", "iron.zip", package="qtl2"))
#' pr <- calc_genoprob(iron, error_prob=0.002)
#'
#' # full set of imputed genotypes
#' ginf <- maxmarg(pr)
#'
#' # imputed genotypes at a fixed position
#' g <- maxmarg(pr, iron$gmap, chr=8, pos=45.5)
#'
#' # return genotype names rather than integers
#' g <- maxmarg(pr, iron$gmap, chr=8, pos=45.5, return_char=TRUE)
maxmarg <-
    function(probs, map=NULL, minprob=0.95, chr=NULL, pos=NULL,
             return_char=FALSE, quiet=TRUE, cores=1, tol=1e-13)
{
    if(is.null(probs)) stop("probs is NULL")

    if(!is_nonneg_number(minprob)) stop("minprob should be a single non-negative number")
    if(!is_nonneg_number(tol)) stop("tol should be a single non-negative number")

    if(!is.null(chr) || !is.null(pos)) {
        if(is.null(chr) || is.null(pos) || is.null(map))
            stop("Provide all of chr, pos, and map, or none of them")
        if(length(chr) > 1 || length(pos) > 1) {
            warning("chr and pos should have length 1; using the first values")
            chr <- chr[1]
            pos <- pos[1]
        }

        # possibly subset the map
        if(length(map) != length(probs) || !all(names(map) == names(probs))) {
            chr <- names(probs)
            if(!all(chr %in% names(map)))
                stop("map doesn't contain all of the necessary chromosomes")
            map <- map[chr]
        }

        chr <- as.character(chr)
        marker <- find_marker(map, chr, pos)

        if(class(probs)[1]=="feather_calc_genoprob")
            probs <- list("1"=probs[,,marker][[1]])
        else
            probs <- list("1"=probs[[chr]][,,marker,drop=FALSE])
        names(probs) <- chr
        class(probs) <- c("calc_genoprob", "list")
    }
    else {
        if(!is.null(map)) # give warning that map was provided but not needed (or used)
            warning("map provided but not used (only needed in chr and pos are provided)")
    }


    if(return_char && is.null(colnames(probs[[1]]))) {
        warning("No genotype names included in probs; returning integers")
        return_char <- FALSE
    }

    dn <- dimnames(probs)
    probs_attr <- attributes(probs)

    # function that does the work
    by_chr_func <- function(chr, return_char) {
        if(!quiet) message(" - Chr ", names(probs)[chr])
        result <- .maxmarg(aperm(probs[[chr]], c(2,3,1)), minprob=minprob, tol=tol) # convert to pos x gen x ind
        if(return_char && !is.null(dn[[2]][[chr]]))
            result[,1:ncol(result)] <- dn[[2]][[chr]][result]
        dimnames(result) <- list(dn[[1]], dn[[3]][[chr]])

        result
    }

    # set up cluster; set quiet=TRUE if multi-core
    cores <- setup_cluster(cores, quiet)
    if(!quiet && n_cores(cores)>1) {
        message(" - Using ", n_cores(cores), " cores")
        quiet <- TRUE # make the rest quiet
    }

    # run and combine results
    result <- cluster_lapply(cores, seq_len(length(probs)), by_chr_func, return_char=return_char)
    names(result) <- names(probs)

    # if chr and pos given, return a vector
    if(!is.null(pos)) return(result[[1]][,1])

    # otherwise, return an object like viterbi()
    attr(result, "crosstype") <- probs_attr$crosstype
    attr(result, "alleles") <- probs_attr$alleles
    attr(result, "is_x_chr") <- probs_attr$is_x_chr
    class(result) <- c("viterbi", "list")
    result
}
