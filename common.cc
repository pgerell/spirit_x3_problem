// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.hpp"
#include "common_def.hpp"

BOOST_SPIRIT_INSTANTIATE(start_type, iterator_type, x3::unused_type);

const start_type& start_rule() {
  return start;
}
