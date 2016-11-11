#define USE_ONLY_DEFS
#ifdef USE_ONLY_DEFS
  #include "common_def.hpp"
  #include "expression_def.hpp"
#else
  #include "common.hpp"
#endif  
#include <iostream>

int main() {
  std::string input = "c123";
  iterator_type iter = input.cbegin();
  iterator_type end = input.cend();
  ast::Start attr;
  bool result=x3::parse(iter, end, start_rule(), attr);
  std::cout<<__func__<<":result="<<result<<":iter="<<*iter<<"\n";
  return result;
}
