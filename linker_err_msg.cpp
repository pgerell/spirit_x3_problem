//Purpose:
//  Workaround linker error message by providing
//  missing undefined function.
//
//#define EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
#ifdef EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
//Purpose:
//  Simply copy&pasted name of undefined reference in
//  the linker error message
//  to satisfy linker.
//Result:
//  If !defined(EXPLICIT_DEFINE_SPECIALIZATION_FROM_LINKER_ERROR_MSG) 
//    then same link error as before.
//  Else
//    link succeeds.
//======================================== 
#include "expression.hpp"
#include "common.hpp"
#include <iostream>
template<>
#ifdef __clang__
bool parse_rule<std::__1::__wrap_iter<char const*>, boost::spirit::x3::unused_type, ast::Start>(boost::spirit::x3::rule<count_class, ast::Count, false>, std::__1::__wrap_iter<char const*>& first, std::__1::__wrap_iter<char const*> const&, boost::spirit::x3::unused_type const&, ast::Start&)
#else
bool parse_rule<__gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, boost::spirit::x3::unused_type, ast::Start>(boost::spirit::x3::rule<count_class, ast::Count, false>, __gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >& first, __gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&, boost::spirit::x3::unused_type const&, ast::Start&)
#endif
#define EXPLICIT_DEFINE_SPECIALIZATION_FROM_LINKER_ERROR_MSG
#ifndef EXPLICIT_DEFINE_SPECIALIZATION_FROM_LINKER_ERROR_MSG
;
#else
{ 
  std::cout<<"in:"<<__FILE__<<":"<<__func__<<"\n";
  std::cout<<":first="<<*first<<"\n";
  //throw 999;
  return false;
}
#endif
#endif//EXPLICT_SPECIALIZATION_FROM_LINKER_ERROR_MSG
