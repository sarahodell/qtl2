### R/qtl2geno

[![Build Status](https://travis-ci.org/rqtl/qtl2geno.svg?branch=master)](https://travis-ci.org/rqtl/qtl2geno)

[Karl Broman](http://kbroman.org)

[R/qtl2](http://kbroman.org/qtl2) (aka qtl2) is a reimplementation of
the QTL analysis software [R/qtl](http://www.rqtl.org), to better
handle high-dimensional data and complex cross designs. It is split
into the [qtl2geno](https://github.com/rqtl/qtl2geno) (for calculating
genotype probabilities, imputations, and genetic maps) and
[qtl2scan](https://github.com/rqtl/qtl2scan) (for QTL genome scans and
related calculations).

---

### Installation

R/qtl2 is early in development and so is not yet available on
[CRAN](http://cran.r-project.org).

You can install R/qtl2 from [GitHub](https://github.com/rqtl).

You first need to install a Fortran compiler. See
[Tools for Mac OS X](https://r.research.att.com/tools/) or
[RTools for Windows](https://cran.r-project.org/bin/windows/Rtools/).

You then need to install the
[devtools](https://github.com/hadley/devtools) package.

    install.packages("devtools")

Finally, install R/qtl2 using `devtools::install_github()`.

    library(devtools)
    install_github(c("rqtl/qtl2geno", "rqtl/qtl2scan"))

---

### Vignettes

- [user guide](http://kbroman.org/qtl2/assets/vignettes/user_guide.html)
- [input file formats](http://kbroman.org/qtl2/assets/vignettes/input_files.html)
  (see also the [sample data files](http://kbroman.org/qtl2/pages/sampledata.html))
- [developer guide](http://kbroman.org/qtl2/assets/vignettes/developer_guide.html)
- [HMM benchmarks](http://kbroman.org/qtl2/assets/vignettes/hmm_benchmarks.html)
- [linear regression benchmarks](http://kbroman.org/qtl2/assets/vignettes/linreg_benchmarks.html)

---

#### License

[Licensed](License.md) under [GPL-3](http://www.r-project.org/Licenses/GPL-3).
