// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.h"
#include "common_def.h"

BOOST_SPIRIT_INSTANTIATE(start_type, iterator_type, x3::unused_type);

const start_type& start_rule() {
  return start;
}

