# probs_to_grid
#' Subset genotype probability array to pseudomarkers on a grid
#'
#' Subset genotype probability array (from [calc_genoprob()]
#' to a grid of pseudomarkers along each chromosome.
#'
#' @md
#'
#' @param probs Genotype probabilities as output from
#' [calc_genoprob()] with `stepwidth="fixed"`.
#'
#' @param grid List of logical vectors that indicate which positions
#' are on the grid and should be retained.
#'
#' @return Same list as input, but subset to just include
#' pseudomarkers along a grid. The map attribute is similarly subset.
#'
#' @details This only works if [calc_genoprob()] was run
#' with `stepwidth="fixed"`, so that the genotype
#' probabilities were calculated at a grid of
#' markers/pseudomarkers. When this is the case, we omit all but
#' the probabilities on this grid. Use [calc_grid()] to
#' find the grid positions.
#'
#' @export
#' @keywords utilities
#' @seealso [calc_grid()], [map_to_grid()]
#'
#' @examples
#' grav2 <- read_cross2(system.file("extdata", "grav2.zip", package="qtl2"))
#' map_w_pmar <- insert_pseudomarkers(grav2$gmap, step=1)
#' probs <- calc_genoprob(grav2, map_w_pmar, error_prob=0.002)
#' sapply(probs, dim)
#' grid <- calc_grid(grav2$gmap, step=1)
#' probs_sub <- probs_to_grid(probs, grid)
#' sapply(probs_sub, dim)

probs_to_grid <-
    function(probs, grid)
{
    if(is.null(probs)) stop("probs is NULL")
    if(is.null(grid)) stop("grid is NULL")

    if("cross2" %in% class(probs))
        stop('Input probs is a "cross2" object but should be genotype probabilities, as from calc_genoprob')

    attrs <- attributes(probs)
    chrID <- names(probs)
    result <- vector("list", length(chrID))
    names(result) <- chrID

    npos <- dim(probs)[3,]

    for(i in seq(along=chrID)) {
        # grab grid vector
        if(is.null(grid[[i]]) || all(grid[[i]])) {
            result[[i]] <- probs[[i]]
            next
        }

        # subset probs
        if(length(grid[[i]]) != npos[i])
            stop("length(grid) [", length(grid[[i]]), "] != dim(probs)[3] [",
                 dim(probs)[3], "] for chr ", chrID[i])
        result[[i]] <- probs[[i]][,,grid[[i]],drop=FALSE]
    }

    # Set up attributes. The result object is of class calc_genoprob.
    ignore <- match(c("names","class"), names(attrs))
    for(a in names(attrs)[-ignore])
      attr(result, a) <- attrs[[a]]

    class(result) <- c("calc_genoprob", "list")

    result
}
