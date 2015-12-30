// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fillDown
SEXP fillDown(SEXP x);
RcppExport SEXP tidyr_fillDown(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(fillDown(x));
    return __result;
END_RCPP
}
// fillUp
SEXP fillUp(SEXP x);
RcppExport SEXP tidyr_fillUp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(fillUp(x));
    return __result;
END_RCPP
}
// matrixToDataFrame
List matrixToDataFrame(RObject x);
RcppExport SEXP tidyr_matrixToDataFrame(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    __result = Rcpp::wrap(matrixToDataFrame(x));
    return __result;
END_RCPP
}
// melt_dataframe
List melt_dataframe(const DataFrame& data, const IntegerVector& id_ind, const IntegerVector& measure_ind, String variable_name, String value_name, SEXP attrTemplate, bool factorsAsStrings, bool valueAsFactor, bool variableAsFactor);
RcppExport SEXP tidyr_melt_dataframe(SEXP dataSEXP, SEXP id_indSEXP, SEXP measure_indSEXP, SEXP variable_nameSEXP, SEXP value_nameSEXP, SEXP attrTemplateSEXP, SEXP factorsAsStringsSEXP, SEXP valueAsFactorSEXP, SEXP variableAsFactorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type id_ind(id_indSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type measure_ind(measure_indSEXP);
    Rcpp::traits::input_parameter< String >::type variable_name(variable_nameSEXP);
    Rcpp::traits::input_parameter< String >::type value_name(value_nameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type attrTemplate(attrTemplateSEXP);
    Rcpp::traits::input_parameter< bool >::type factorsAsStrings(factorsAsStringsSEXP);
    Rcpp::traits::input_parameter< bool >::type valueAsFactor(valueAsFactorSEXP);
    Rcpp::traits::input_parameter< bool >::type variableAsFactor(variableAsFactorSEXP);
    __result = Rcpp::wrap(melt_dataframe(data, id_ind, measure_ind, variable_name, value_name, attrTemplate, factorsAsStrings, valueAsFactor, variableAsFactor));
    return __result;
END_RCPP
}
// simplifyPieces
List simplifyPieces(ListOf<CharacterVector> pieces, int p, bool fillLeft);
RcppExport SEXP tidyr_simplifyPieces(SEXP piecesSEXP, SEXP pSEXP, SEXP fillLeftSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type pieces(piecesSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type fillLeft(fillLeftSEXP);
    __result = Rcpp::wrap(simplifyPieces(pieces, p, fillLeft));
    return __result;
END_RCPP
}
