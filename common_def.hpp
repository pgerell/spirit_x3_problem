
#include "common.hpp"
#include "expression.hpp"

using x3::omit;
  
const start_type start = "start";

const auto count = count_rule();
#define KEEP_CHAR
#ifdef KEEP_CHAR
const auto start_def = x3::char_ >> count;
#else
const auto start_def = x3::omit[x3::char_] >> count;
#endif

BOOST_SPIRIT_DEFINE(start);
