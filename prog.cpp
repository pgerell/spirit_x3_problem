//#define BOOST_SPIRIT_X3_DEBUG
//#define USE_ONLY_DEFS
#ifdef USE_ONLY_DEFS
  //Purpose:
  //  See what happens if none of the BOOST_SPIRIT_INSTANTIATE
  //  macros in the *.cpp files are invoked.
  //Result:
  //  Causes compile error:
/*
                 ^
In file included from /home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/auxiliary/any_parser.hpp:17:0,
                 from /home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/auxiliary.hpp:11,
                 from /home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3.hpp:14,
                 from ast.hpp:2,
                 from expression.hpp:3,
                 from common_def.hpp:2,
                 from prog.cpp:7:
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/support/traits/move_to.hpp: In instantiation of ‘void boost::spirit::x3::traits::detail::move_to_plain(Source&&, Dest&, mpl_::false_) [with Source = ast::Count; Dest = ast::Start; mpl_::false_ = mpl_::bool_<false>]’:
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/support/traits/move_to.hpp:81:26:   required from ‘void boost::spirit::x3::traits::detail::move_to(Source&&, Dest&, boost::spirit::x3::traits::plain_attribute) [with Source = ast::Count; Dest = ast::Start]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/support/traits/move_to.hpp:180:24:   required from ‘void boost::spirit::x3::traits::move_to(Source&&, Dest&) [with Source = ast::Count; Dest = ast::Start]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/detail/transform_attribute.hpp:29:28:   required from ‘static void boost::spirit::x3::default_transform_attribute<Exposed, Transformed>::post(Exposed&, Transformed&&) [with Exposed = ast::Start; Transformed = ast::Count]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/detail/transform_attribute.hpp:106:19:   required from ‘void boost::spirit::x3::traits::post_transform(Exposed&, Transformed&&) [with Exposed = ast::Start; Transformed = ast::Count]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/detail/rule.hpp:344:39:   required from ‘static bool boost::spirit::x3::detail::rule_parser<Attribute, ID>::call_rule_definition(const RHS&, const char*, Iterator&, const Iterator&, const Context&, ActualAttribute&, ExplicitAttrPropagation) [with RHS = boost::spirit::x3::int_parser<int>; Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Context = boost::spirit::x3::unused_type; ActualAttribute = ast::Start; ExplicitAttrPropagation = mpl_::bool_<false>; Attribute = ast::Count; ID = count_class]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/rule.hpp:64:39:   [ skipping 10 instantiation contexts, use -ftemplate-backtrace-limit=0 to disable ]
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/rule.hpp:64:39:   required from ‘bool boost::spirit::x3::rule_definition<ID, RHS, Attribute, force_attribute_>::parse(Iterator&, const Iterator&, const Context&, boost::spirit::x3::unused_type, Attribute_&) const [with Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Context = boost::spirit::x3::unused_type; Attribute_ = ast::Start; ID = start_class; RHS = boost::spirit::x3::sequence<boost::spirit::x3::omit_directive<boost::spirit::x3::any_char<boost::spirit::char_encoding::standard> >, boost::spirit::x3::rule<count_class, ast::Count> >; Attribute = ast::Start; bool force_attribute_ = false]’
common_def.hpp:20:1:   required from ‘bool parse_rule(start_type, Iterator&, const Iterator&, const Context&, Attribute&) [with Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Context = boost::spirit::x3::unused_type; Attribute = ast::Start; start_type = boost::spirit::x3::rule<start_class, ast::Start>]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/nonterminal/rule.hpp:116:30:   required from ‘bool boost::spirit::x3::rule<ID, Attribute, force_attribute>::parse(Iterator&, const Iterator&, const Context&, boost::spirit::x3::unused_type, Attribute_&) const [with Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Context = boost::spirit::x3::unused_type; Attribute_ = ast::Start; ID = start_class; Attribute = ast::Start; bool force_attribute_ = false]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/core/parse.hpp:35:68:   required from ‘bool boost::spirit::x3::parse_main(Iterator&, Iterator, const Parser&, Attribute&) [with Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Parser = boost::spirit::x3::rule<start_class, ast::Start>; Attribute = ast::Start]’
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/core/parse.hpp:47:26:   required from ‘bool boost::spirit::x3::parse(Iterator&, Iterator, const Parser&, Attribute&) [with Iterator = __gnu_cxx::__normal_iterator<const char*, std::__cxx11::basic_string<char> >; Parser = boost::spirit::x3::rule<start_class, ast::Start>; Attribute = ast::Start]’
prog.cpp:19:54:   required from here
/home/evansl/prog_dev/boost/releases/ro/boost_1_61_0/boost/spirit/home/x3/support/traits/move_to.hpp:62:18: error: no match for ‘operator=’ (operand types are ‘ast::Start’ and ‘std::remove_reference<ast::Count&>::type {aka ast::Count}’)
             dest = std::move(src);
                  ^
In file included from expression.hpp:3:0,
                 from common_def.hpp:2,
                 from prog.cpp:7:
ast.hpp:22:10: note: candidate: ast::Start& ast::Start::operator=(const ast::Start&)
   struct Start {
          ^
ast.hpp:22:10: note:   no known conversion for argument 1 from ‘std::remove_reference<ast::Count&>::type {aka ast::Count}’ to ‘const ast::Start&’
ast.hpp:22:10: note: candidate: ast::Start& ast::Start::operator=(ast::Start&&)
ast.hpp:22:10: note:   no known conversion for argument 1 from ‘std::remove_reference<ast::Count&>::type {aka ast::Count}’ to ‘ast::Start&&’
 */
 //=========================
  #include "common_def.hpp"
  #include "expression_def.hpp"
#else
  #include "common.hpp"
#endif  
#include <iostream>

int main() {
  std::string input = "c123";
  std::cout<<"from function("<<__func__<<")\n";
  std::cout<<":input="<<input<<".\n";
  iterator_type iter = input.cbegin();
  iterator_type end = input.cend();
  ast::Start attr;
  bool result=x3::parse(iter, end, start_rule(), attr);
  std::cout<<":result="<<result<<".\n";
  std::cout<<":attr=\n{\n";
#ifdef KEEP_CHAR
    std::cout<<"  :ch="<<attr.ch<<"\n";
#endif
    std::cout<<"  :count="<<attr.count.value<<"\n";
  std::cout<<"}.\n";  
  std::cout<<":remaining input=\n{\n";
  for(;iter!=end; ++iter)
    { std::cout<<*iter;
    }
  std::cout<<"}.\n";
  return 0;
}
