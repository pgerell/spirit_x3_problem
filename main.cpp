#include <vector>
#include "ast.h"
#include "boost/spirit/home/x3.hpp"
#include "common.h"


int main() {
  std::string input = "c123";
  auto iter = input.cbegin();
  auto end = input.cend();
  ast::Start attr;
  return x3::parse(iter, end, start_rule(), attr);
}
