// The adapted include must be among the first (before any file that may include ast.hpp)
#include "ast_adapted.hpp"
#include "expression_def.hpp"

BOOST_SPIRIT_INSTANTIATE(count_type, iterator_type, x3::unused_type);

#if 1
//Workaround the link problem:
    template bool parse_rule<iterator_type, x3::unused_type, ast::Start>( 
        count_type rule_                                                         
      , iterator_type& first, iterator_type const& last                          
      , x3::unused_type const& context, ast::Start& attr);       
#endif
