// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// interpolate_map
NumericVector interpolate_map(const NumericVector& oldpos, const NumericVector& oldmap, const NumericVector& newmap);
RcppExport SEXP qtl2scan_interpolate_map(SEXP oldposSEXP, SEXP oldmapSEXP, SEXP newmapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type oldpos(oldposSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type oldmap(oldmapSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newmap(newmapSEXP);
    __result = Rcpp::wrap(interpolate_map(oldpos, oldmap, newmap));
    return __result;
END_RCPP
}
// fit_linreg_eigenchol
List fit_linreg_eigenchol(const NumericMatrix& X, const NumericVector& y);
RcppExport SEXP qtl2scan_fit_linreg_eigenchol(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(fit_linreg_eigenchol(X, y));
    return __result;
END_RCPP
}
// calc_rss_eigenchol
double calc_rss_eigenchol(const NumericMatrix& X, const NumericVector& y);
RcppExport SEXP qtl2scan_calc_rss_eigenchol(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(calc_rss_eigenchol(X, y));
    return __result;
END_RCPP
}
// fit_linreg_eigenqr
List fit_linreg_eigenqr(const NumericMatrix& X, const NumericVector& y, const double tol);
RcppExport SEXP qtl2scan_fit_linreg_eigenqr(SEXP XSEXP, SEXP ySEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(fit_linreg_eigenqr(X, y, tol));
    return __result;
END_RCPP
}
// calc_rss_eigenqr
double calc_rss_eigenqr(const NumericMatrix& X, const NumericVector& y, const double tol);
RcppExport SEXP qtl2scan_calc_rss_eigenqr(SEXP XSEXP, SEXP ySEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_rss_eigenqr(X, y, tol));
    return __result;
END_RCPP
}
// calc_mvrss_eigenchol
NumericVector calc_mvrss_eigenchol(const NumericMatrix& X, const NumericMatrix& Y);
RcppExport SEXP qtl2scan_calc_mvrss_eigenchol(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    __result = Rcpp::wrap(calc_mvrss_eigenchol(X, Y));
    return __result;
END_RCPP
}
// calc_mvrss_eigenqr
NumericVector calc_mvrss_eigenqr(const NumericMatrix& X, const NumericMatrix& Y, const double tol);
RcppExport SEXP qtl2scan_calc_mvrss_eigenqr(SEXP XSEXP, SEXP YSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_mvrss_eigenqr(X, Y, tol));
    return __result;
END_RCPP
}
// calc_resid_eigenchol
NumericMatrix calc_resid_eigenchol(const NumericMatrix& X, const NumericMatrix& Y);
RcppExport SEXP qtl2scan_calc_resid_eigenchol(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    __result = Rcpp::wrap(calc_resid_eigenchol(X, Y));
    return __result;
END_RCPP
}
// calc_resid_eigenqr
NumericMatrix calc_resid_eigenqr(const NumericMatrix& X, const NumericMatrix& Y, const double tol);
RcppExport SEXP qtl2scan_calc_resid_eigenqr(SEXP XSEXP, SEXP YSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_resid_eigenqr(X, Y, tol));
    return __result;
END_RCPP
}
// calc_rss_lapack
NumericVector calc_rss_lapack(const NumericMatrix& X, const NumericMatrix& Y, const bool skip_dgels, const double tol);
RcppExport SEXP qtl2scan_calc_rss_lapack(SEXP XSEXP, SEXP YSEXP, SEXP skip_dgelsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const bool >::type skip_dgels(skip_dgelsSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_rss_lapack(X, Y, skip_dgels, tol));
    return __result;
END_RCPP
}
// calc_resid_lapack
NumericMatrix calc_resid_lapack(const NumericMatrix& X, const NumericMatrix& Y, const bool skip_dgels, const double tol);
RcppExport SEXP qtl2scan_calc_resid_lapack(SEXP XSEXP, SEXP YSEXP, SEXP skip_dgelsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const bool >::type skip_dgels(skip_dgelsSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_resid_lapack(X, Y, skip_dgels, tol));
    return __result;
END_RCPP
}
// calc_rss_linreg
NumericVector calc_rss_linreg(const NumericMatrix& X, const NumericMatrix& Y, const double tol);
RcppExport SEXP qtl2scan_calc_rss_linreg(SEXP XSEXP, SEXP YSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_rss_linreg(X, Y, tol));
    return __result;
END_RCPP
}
// calc_resid_linreg
NumericMatrix calc_resid_linreg(const NumericMatrix& X, const NumericMatrix& Y, const double tol);
RcppExport SEXP qtl2scan_calc_resid_linreg(SEXP XSEXP, SEXP YSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_resid_linreg(X, Y, tol));
    return __result;
END_RCPP
}
// calc_resid_linreg_3d
NumericVector calc_resid_linreg_3d(const NumericMatrix& X, const NumericVector& P, const double tol);
RcppExport SEXP qtl2scan_calc_resid_linreg_3d(SEXP XSEXP, SEXP PSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(calc_resid_linreg_3d(X, P, tol));
    return __result;
END_RCPP
}
// Rcpp_eigen_decomp
List Rcpp_eigen_decomp(const NumericMatrix& A);
RcppExport SEXP qtl2scan_Rcpp_eigen_decomp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type A(ASEXP);
    __result = Rcpp::wrap(Rcpp_eigen_decomp(A));
    return __result;
END_RCPP
}
// Rcpp_eigen_rotation
List Rcpp_eigen_rotation(const NumericMatrix& K, const NumericMatrix& y, const NumericMatrix& X);
RcppExport SEXP qtl2scan_Rcpp_eigen_rotation(SEXP KSEXP, SEXP ySEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    __result = Rcpp::wrap(Rcpp_eigen_rotation(K, y, X));
    return __result;
END_RCPP
}
// Rcpp_fitLMM
List Rcpp_fitLMM(const NumericVector& Kva, const NumericVector& y, const NumericMatrix& X, const bool reml, const bool check_boundary, const double logdetXpX, const double tol);
RcppExport SEXP qtl2scan_Rcpp_fitLMM(SEXP KvaSEXP, SEXP ySEXP, SEXP XSEXP, SEXP remlSEXP, SEXP check_boundarySEXP, SEXP logdetXpXSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type Kva(KvaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type reml(remlSEXP);
    Rcpp::traits::input_parameter< const bool >::type check_boundary(check_boundarySEXP);
    Rcpp::traits::input_parameter< const double >::type logdetXpX(logdetXpXSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(Rcpp_fitLMM(Kva, y, X, reml, check_boundary, logdetXpX, tol));
    return __result;
END_RCPP
}
// cbind_imatrix
IntegerMatrix cbind_imatrix(const IntegerMatrix& mat1, const IntegerMatrix& mat2);
RcppExport SEXP qtl2scan_cbind_imatrix(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(cbind_imatrix(mat1, mat2));
    return __result;
END_RCPP
}
// cbind_3imatrix
IntegerMatrix cbind_3imatrix(const IntegerMatrix& mat1, const IntegerMatrix& mat2, const IntegerMatrix& mat3);
RcppExport SEXP qtl2scan_cbind_3imatrix(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat3(mat3SEXP);
    __result = Rcpp::wrap(cbind_3imatrix(mat1, mat2, mat3));
    return __result;
END_RCPP
}
// cbind_nmatrix
NumericMatrix cbind_nmatrix(const NumericMatrix& mat1, const NumericMatrix& mat2);
RcppExport SEXP qtl2scan_cbind_nmatrix(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(cbind_nmatrix(mat1, mat2));
    return __result;
END_RCPP
}
// cbind_3nmatrix
NumericMatrix cbind_3nmatrix(const NumericMatrix& mat1, const NumericMatrix& mat2, const NumericMatrix& mat3);
RcppExport SEXP qtl2scan_cbind_3nmatrix(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat3(mat3SEXP);
    __result = Rcpp::wrap(cbind_3nmatrix(mat1, mat2, mat3));
    return __result;
END_RCPP
}
// rbind_imatrix
IntegerMatrix rbind_imatrix(const IntegerMatrix& mat1, const IntegerMatrix& mat2);
RcppExport SEXP qtl2scan_rbind_imatrix(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(rbind_imatrix(mat1, mat2));
    return __result;
END_RCPP
}
// rbind_3imatrix
IntegerMatrix rbind_3imatrix(const IntegerMatrix& mat1, const IntegerMatrix& mat2, const IntegerMatrix& mat3);
RcppExport SEXP qtl2scan_rbind_3imatrix(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type mat3(mat3SEXP);
    __result = Rcpp::wrap(rbind_3imatrix(mat1, mat2, mat3));
    return __result;
END_RCPP
}
// rbind_nmatrix
NumericMatrix rbind_nmatrix(const NumericMatrix& mat1, const NumericMatrix& mat2);
RcppExport SEXP qtl2scan_rbind_nmatrix(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(rbind_nmatrix(mat1, mat2));
    return __result;
END_RCPP
}
// rbind_3nmatrix
NumericMatrix rbind_3nmatrix(const NumericMatrix& mat1, const NumericMatrix& mat2, const NumericMatrix& mat3);
RcppExport SEXP qtl2scan_rbind_3nmatrix(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat3SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat3(mat3SEXP);
    __result = Rcpp::wrap(rbind_3nmatrix(mat1, mat2, mat3));
    return __result;
END_RCPP
}
// find_matching_cols
NumericVector find_matching_cols(const NumericMatrix& mat, const double tol);
RcppExport SEXP qtl2scan_find_matching_cols(SEXP matSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(find_matching_cols(mat, tol));
    return __result;
END_RCPP
}
// find_lin_indep_cols
IntegerVector find_lin_indep_cols(const NumericMatrix& mat, const double tol);
RcppExport SEXP qtl2scan_find_lin_indep_cols(SEXP matSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(find_lin_indep_cols(mat, tol));
    return __result;
END_RCPP
}
// formX_intcovar
NumericMatrix formX_intcovar(const NumericVector& probs, const NumericMatrix& addcovar, const NumericMatrix& intcovar, const int position);
RcppExport SEXP qtl2scan_formX_intcovar(SEXP probsSEXP, SEXP addcovarSEXP, SEXP intcovarSEXP, SEXP positionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type addcovar(addcovarSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intcovar(intcovarSEXP);
    Rcpp::traits::input_parameter< const int >::type position(positionSEXP);
    __result = Rcpp::wrap(formX_intcovar(probs, addcovar, intcovar, position));
    return __result;
END_RCPP
}
// expand_genoprobs_intcovar
NumericVector expand_genoprobs_intcovar(const NumericVector& probs, const NumericMatrix& intcovar);
RcppExport SEXP qtl2scan_expand_genoprobs_intcovar(SEXP probsSEXP, SEXP intcovarSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intcovar(intcovarSEXP);
    __result = Rcpp::wrap(expand_genoprobs_intcovar(probs, intcovar));
    return __result;
END_RCPP
}
// weighted_matrix
NumericMatrix weighted_matrix(const NumericMatrix& mat, const NumericVector& weights);
RcppExport SEXP qtl2scan_weighted_matrix(SEXP matSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    __result = Rcpp::wrap(weighted_matrix(mat, weights));
    return __result;
END_RCPP
}
// weighted_3darray
NumericVector weighted_3darray(const NumericVector& array, const NumericVector& weights);
RcppExport SEXP qtl2scan_weighted_3darray(SEXP arraySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type array(arraySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    __result = Rcpp::wrap(weighted_3darray(array, weights));
    return __result;
END_RCPP
}
// random_int
IntegerVector random_int(const int n, const int low, const int high);
RcppExport SEXP qtl2scan_random_int(SEXP nSEXP, SEXP lowSEXP, SEXP highSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const int >::type high(highSEXP);
    __result = Rcpp::wrap(random_int(n, low, high));
    return __result;
END_RCPP
}
// get_permutation
IntegerVector get_permutation(const int n);
RcppExport SEXP qtl2scan_get_permutation(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    __result = Rcpp::wrap(get_permutation(n));
    return __result;
END_RCPP
}
// permute_nvector
NumericMatrix permute_nvector(const int n_perm, const NumericVector x);
RcppExport SEXP qtl2scan_permute_nvector(SEXP n_permSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n_perm(n_permSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(permute_nvector(n_perm, x));
    return __result;
END_RCPP
}
// permute_ivector
IntegerMatrix permute_ivector(const int n_perm, const IntegerVector x);
RcppExport SEXP qtl2scan_permute_ivector(SEXP n_permSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n_perm(n_permSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type x(xSEXP);
    __result = Rcpp::wrap(permute_ivector(n_perm, x));
    return __result;
END_RCPP
}
// permute_nvector_stratified
NumericMatrix permute_nvector_stratified(const int n_perm, const NumericVector& x, const IntegerVector& strata, int n_strata);
RcppExport SEXP qtl2scan_permute_nvector_stratified(SEXP n_permSEXP, SEXP xSEXP, SEXP strataSEXP, SEXP n_strataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n_perm(n_permSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< int >::type n_strata(n_strataSEXP);
    __result = Rcpp::wrap(permute_nvector_stratified(n_perm, x, strata, n_strata));
    return __result;
END_RCPP
}
// permute_ivector_stratified
IntegerMatrix permute_ivector_stratified(const int n_perm, const IntegerVector& x, const IntegerVector& strata, int n_strata);
RcppExport SEXP qtl2scan_permute_ivector_stratified(SEXP n_permSEXP, SEXP xSEXP, SEXP strataSEXP, SEXP n_strataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type n_perm(n_permSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< int >::type n_strata(n_strataSEXP);
    __result = Rcpp::wrap(permute_ivector_stratified(n_perm, x, strata, n_strata));
    return __result;
END_RCPP
}
// scan_hk_onechr_nocovar
NumericMatrix scan_hk_onechr_nocovar(const NumericVector& genoprobs, const NumericMatrix& pheno, const double tol);
RcppExport SEXP qtl2scan_scan_hk_onechr_nocovar(SEXP genoprobsSEXP, SEXP phenoSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type genoprobs(genoprobsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type pheno(phenoSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(scan_hk_onechr_nocovar(genoprobs, pheno, tol));
    return __result;
END_RCPP
}
// scan_hk_onechr
NumericMatrix scan_hk_onechr(const NumericVector& genoprobs, const NumericMatrix& pheno, const NumericMatrix& addcovar, const double tol);
RcppExport SEXP qtl2scan_scan_hk_onechr(SEXP genoprobsSEXP, SEXP phenoSEXP, SEXP addcovarSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type genoprobs(genoprobsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type pheno(phenoSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type addcovar(addcovarSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(scan_hk_onechr(genoprobs, pheno, addcovar, tol));
    return __result;
END_RCPP
}
// scan_hk_onechr_weighted
NumericMatrix scan_hk_onechr_weighted(const NumericVector& genoprobs, const NumericMatrix& pheno, const NumericMatrix& addcovar, const NumericVector& weights, const double tol);
RcppExport SEXP qtl2scan_scan_hk_onechr_weighted(SEXP genoprobsSEXP, SEXP phenoSEXP, SEXP addcovarSEXP, SEXP weightsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type genoprobs(genoprobsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type pheno(phenoSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type addcovar(addcovarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(scan_hk_onechr_weighted(genoprobs, pheno, addcovar, weights, tol));
    return __result;
END_RCPP
}
// scan_hk_onechr_intcovar_highmem
NumericMatrix scan_hk_onechr_intcovar_highmem(const NumericVector& genoprobs, const NumericMatrix& pheno, const NumericMatrix& addcovar, const NumericMatrix& intcovar, const double tol);
RcppExport SEXP qtl2scan_scan_hk_onechr_intcovar_highmem(SEXP genoprobsSEXP, SEXP phenoSEXP, SEXP addcovarSEXP, SEXP intcovarSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type genoprobs(genoprobsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type pheno(phenoSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type addcovar(addcovarSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intcovar(intcovarSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    __result = Rcpp::wrap(scan_hk_onechr_intcovar_highmem(genoprobs, pheno, addcovar, intcovar, tol));
    return __result;
END_RCPP
}
