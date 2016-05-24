// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.h"
#include "expression_def.h"

BOOST_SPIRIT_INSTANTIATE(count_type, iterator_type, x3::unused_type);
