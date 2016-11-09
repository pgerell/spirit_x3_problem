// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.hpp"
#include "common_def.hpp"

BOOST_SPIRIT_INSTANTIATE(start_type, iterator_type, x3::unused_type);

#define EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
#ifdef EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
template<>
bool parse_rule<std::__1::__wrap_iter<char const*>, boost::spirit::x3::unused_type, ast::Start>(boost::spirit::x3::rule<count_class, ast::Count, false>, std::__1::__wrap_iter<char const*>&, std::__1::__wrap_iter<char const*> const&, boost::spirit::x3::unused_type const&, ast::Start&)
{ return false;
}
//^Purpose:
//  Simply copy&paste error message from linker below to see if
//  this will satisfy linker.
//ModificationsAfterCopy&Paste:
//  Added:
//    template<>
//  prefix.
//Result:
//  Link succeeds:
//======================================== 
#endif//EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG


const start_type& start_rule() {
  return start;
}
