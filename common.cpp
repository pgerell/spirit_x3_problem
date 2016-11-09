// The adapted include must be among the first (before any file that may include ast.h)
#include "ast_adapted.hpp"
#include "common_def.hpp"
using start_decl=decltype(start);
BOOST_SPIRIT_INSTANTIATE(start_decl, iterator_type, x3::unused_type);

#define EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
#ifdef EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
template<>
bool parse_rule<std::__1::__wrap_iter<char const*>, boost::spirit::x3::unused_type, ast::Start>(boost::spirit::x3::rule<start_class, ast::Start, false>, std::__1::__wrap_iter<char const*>&, std::__1::__wrap_iter<char const*> const&, boost::spirit::x3::unused_type const&, ast::Start&)
#define EXPLICIT_DEFINE_SPECIALIZATION_FROM_LINKER_ERROR_MSG
#ifndef EXPLICIT_DEFINE_SPECIALIZATION_FROM_LINKER_ERROR_MSG
;
#else
{ return false;}
#endif
//^Purpose:
//  Simply copy&pasted name of undefined reference in
//  the linker error message below
//  to see if this will satisfy linker.
//ModificationsAfterCopy&Paste:
//  Added:
//    template<>
//  prefix after compiler complained:
/*
common.cpp:10:6: error: template specialization requires 'template<>'
*/
//Result:
//  Same link error as before:
/*
undefined reference to `
bool parse_rule<std::__1::__wrap_iter<char const*>, boost::spirit::x3::unused_type, ast::Start>(boost::spirit::x3::rule<start_class, ast::Start, false>, std::__1::__wrap_iter<char const*>&, std::__1::__wrap_iter<char const*> const&, boost::spirit::x3::unused_type const&, ast::Start&)
'
 */
//======================================== 
#endif//EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG


const start_type& start_rule() {
  return start;
}
