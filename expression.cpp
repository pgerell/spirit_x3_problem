// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.hpp"
//#include "expression_def.hpp"
#include "expression.hpp"

const count_type count = "count";

auto count_def = x3::int_;

BOOST_SPIRIT_DEFINE(count);

BOOST_SPIRIT_INSTANTIATE(count_type, iterator_type, x3::unused_type);

const count_type& count_rule() {
  return count;
}
