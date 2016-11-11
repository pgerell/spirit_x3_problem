// The adapted include must be among the first (before any file that may include ast.hpp)
#include "ast_adapted.hpp"
#include "expression_def.hpp"

BOOST_SPIRIT_INSTANTIATE(count_type, iterator_type, x3::unused_type);
