// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

SEXP parse_gb_location(std::string gb_base_span);
CharacterVector get_qual(std::vector<std::string> lines);
SEXP parse_feature_table(int id = 0, CharacterVector lines = CharacterVector::create(""), std::string db_dir = "", std::string accession = "", std::string definition = "");

static bool validateExported(const std::string& sig) {
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("SEXP(*parse_gb_location)(std::string)");
        signatures.insert("CharacterVector(*get_qual)(std::vector<std::string>)");
        signatures.insert("SEXP(*parse_feature_table)(int,CharacterVector,std::string,std::string,std::string)");
    }
    return signatures.find(sig) != signatures.end();
}

RCPP_MODULE(biofiles_RcppExports) {
    Rcpp::function("parse_gb_location", &parse_gb_location, Rcpp::List::create(Rcpp::Named("gb_base_span")));
    Rcpp::function("get_qual", &get_qual, Rcpp::List::create(Rcpp::Named("lines")));
    Rcpp::function("parse_feature_table", &parse_feature_table, Rcpp::List::create(Rcpp::Named("id") = 0, Rcpp::Named("lines") = CharacterVector::create(""), Rcpp::Named("db_dir") = "", Rcpp::Named("accession") = "", Rcpp::Named("definition") = ""));
    Rcpp::function("RcppExports_validateExported", &validateExported);
}
