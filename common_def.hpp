
#include "expression.hpp"
#include "common.hpp"

using x3::omit;
  
const start_type start = "start";

namespace detail
{
  const auto count = count_rule();
}

#ifdef KEEP_CHAR
const auto start_def = x3::char_ >> detail::count;
#else
const auto start_def = x3::omit[x3::char_] >> detail::count;
#endif

BOOST_SPIRIT_DEFINE(start);

const start_type& start_rule() {
  return start;
}
