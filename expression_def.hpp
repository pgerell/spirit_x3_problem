
#include "expression.hpp"

const count_type count = "count";

auto count_def = x3::int_;

BOOST_SPIRIT_DEFINE(count);

const count_type& count_rule() {
  return count;
}

