// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// latentregcpp
List latentregcpp(IntegerMatrix Rdata, unsigned int dim, int model, double EMepsilon, NumericMatrix Rtheta, NumericVector Rweights, IntegerVector Rindividual_weights, bool dichotomous_data, IntegerVector Rclusters, NumericMatrix Rinitial_values, bool verbose);
RcppExport SEXP LatentREGpp_latentregcpp(SEXP RdataSEXP, SEXP dimSEXP, SEXP modelSEXP, SEXP EMepsilonSEXP, SEXP RthetaSEXP, SEXP RweightsSEXP, SEXP Rindividual_weightsSEXP, SEXP dichotomous_dataSEXP, SEXP RclustersSEXP, SEXP Rinitial_valuesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix >::type Rdata(RdataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    Rcpp::traits::input_parameter< double >::type EMepsilon(EMepsilonSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rtheta(RthetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rweights(RweightsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Rindividual_weights(Rindividual_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type dichotomous_data(dichotomous_dataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Rclusters(RclustersSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rinitial_values(Rinitial_valuesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(latentregcpp(Rdata, dim, model, EMepsilon, Rtheta, Rweights, Rindividual_weights, dichotomous_data, Rclusters, Rinitial_values, verbose));
    return __result;
END_RCPP
}
// ltraitscpp
List ltraitscpp(IntegerMatrix Rdata, unsigned int dim, int model, NumericMatrix Rzetas, NumericMatrix Rtheta, NumericVector Rweights, std::string method, bool by_individuals, bool dichotomous_data, NumericMatrix Rinit_traits);
RcppExport SEXP LatentREGpp_ltraitscpp(SEXP RdataSEXP, SEXP dimSEXP, SEXP modelSEXP, SEXP RzetasSEXP, SEXP RthetaSEXP, SEXP RweightsSEXP, SEXP methodSEXP, SEXP by_individualsSEXP, SEXP dichotomous_dataSEXP, SEXP Rinit_traitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix >::type Rdata(RdataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rzetas(RzetasSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rtheta(RthetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rweights(RweightsSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type by_individuals(by_individualsSEXP);
    Rcpp::traits::input_parameter< bool >::type dichotomous_data(dichotomous_dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rinit_traits(Rinit_traitsSEXP);
    __result = Rcpp::wrap(ltraitscpp(Rdata, dim, model, Rzetas, Rtheta, Rweights, method, by_individuals, dichotomous_data, Rinit_traits));
    return __result;
END_RCPP
}
