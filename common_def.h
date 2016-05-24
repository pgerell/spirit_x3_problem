
#include "common.h"
#include "expression.h"

using x3::omit;
  
const start_type       start = "start";

const auto count = count_rule();
//const auto start_def = x3::char_ >> count;
const auto start_def = x3::omit[x3::char_] >> count;


BOOST_SPIRIT_DEFINE(start);

