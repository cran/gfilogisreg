// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_umax
Rcpp::List get_umax(const arma::mat& P, const arma::vec& b, arma::vec& init, const double ufactr);
RcppExport SEXP _gfilogisreg_get_umax(SEXP PSEXP, SEXP bSEXP, SEXP initSEXP, SEXP ufactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const double >::type ufactr(ufactrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_umax(P, b, init, ufactr));
    return rcpp_result_gen;
END_RCPP
}
// get_vmin_i
double get_vmin_i(const arma::mat& P, const arma::vec& b, const size_t i, const arma::vec& mu, const double vfactr);
RcppExport SEXP _gfilogisreg_get_vmin_i(SEXP PSEXP, SEXP bSEXP, SEXP iSEXP, SEXP muSEXP, SEXP vfactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const size_t >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type vfactr(vfactrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_vmin_i(P, b, i, mu, vfactr));
    return rcpp_result_gen;
END_RCPP
}
// get_vmin
arma::vec get_vmin(const arma::mat& P, const arma::vec& b, const arma::vec& mu, const double vfactr);
RcppExport SEXP _gfilogisreg_get_vmin(SEXP PSEXP, SEXP bSEXP, SEXP muSEXP, SEXP vfactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type vfactr(vfactrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_vmin(P, b, mu, vfactr));
    return rcpp_result_gen;
END_RCPP
}
// get_vmax
arma::vec get_vmax(const arma::mat& P, const arma::vec& b, const arma::vec& mu, const double vfactr);
RcppExport SEXP _gfilogisreg_get_vmax(SEXP PSEXP, SEXP bSEXP, SEXP muSEXP, SEXP vfactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type vfactr(vfactrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_vmax(P, b, mu, vfactr));
    return rcpp_result_gen;
END_RCPP
}
// get_bounds
Rcpp::List get_bounds(const arma::mat& P, const arma::vec& b, arma::vec& init, const double ufactr, const double vfactr);
RcppExport SEXP _gfilogisreg_get_bounds(SEXP PSEXP, SEXP bSEXP, SEXP initSEXP, SEXP ufactrSEXP, SEXP vfactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const double >::type ufactr(ufactrSEXP);
    Rcpp::traits::input_parameter< const double >::type vfactr(vfactrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_bounds(P, b, init, ufactr, vfactr));
    return rcpp_result_gen;
END_RCPP
}
// rcd
arma::mat rcd(const size_t n, const arma::mat& P, const arma::vec& b, arma::vec& init, const double ufactr, const double vfactr);
RcppExport SEXP _gfilogisreg_rcd(SEXP nSEXP, SEXP PSEXP, SEXP bSEXP, SEXP initSEXP, SEXP ufactrSEXP, SEXP vfactrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const double >::type ufactr(ufactrSEXP);
    Rcpp::traits::input_parameter< const double >::type vfactr(vfactrSEXP);
    rcpp_result_gen = Rcpp::wrap(rcd(n, P, b, init, ufactr, vfactr));
    return rcpp_result_gen;
END_RCPP
}
// loop1
Rcpp::List loop1(const Rcpp::List H, const Rcpp::List Points, const int y, const arma::colvec& Xt);
RcppExport SEXP _gfilogisreg_loop1(SEXP HSEXP, SEXP PointsSEXP, SEXP ySEXP, SEXP XtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type H(HSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type Points(PointsSEXP);
    Rcpp::traits::input_parameter< const int >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type Xt(XtSEXP);
    rcpp_result_gen = Rcpp::wrap(loop1(H, Points, y, Xt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gfilogisreg_get_umax", (DL_FUNC) &_gfilogisreg_get_umax, 4},
    {"_gfilogisreg_get_vmin_i", (DL_FUNC) &_gfilogisreg_get_vmin_i, 5},
    {"_gfilogisreg_get_vmin", (DL_FUNC) &_gfilogisreg_get_vmin, 4},
    {"_gfilogisreg_get_vmax", (DL_FUNC) &_gfilogisreg_get_vmax, 4},
    {"_gfilogisreg_get_bounds", (DL_FUNC) &_gfilogisreg_get_bounds, 5},
    {"_gfilogisreg_rcd", (DL_FUNC) &_gfilogisreg_rcd, 6},
    {"_gfilogisreg_loop1", (DL_FUNC) &_gfilogisreg_loop1, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_gfilogisreg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
