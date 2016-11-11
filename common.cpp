// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.hpp"
//#include "common_def.hpp"
#include "expression.hpp"
#include "common.hpp"

using x3::omit;
  
const start_type start = "start";

const auto count = count_rule();
#ifdef KEEP_CHAR
const auto start_def = x3::char_ >> count;
#else
const auto start_def = x3::omit[x3::char_] >> count;
#endif

BOOST_SPIRIT_DEFINE(start);

BOOST_SPIRIT_INSTANTIATE(start_type, iterator_type, x3::unused_type);

const start_type& start_rule() {
  return start;
}

