#include "common.hpp"

int main() {
  std::string input = "c123";
  iterator_type iter = input.cbegin();
  iterator_type end = input.cend();
  ast::Start attr;
  return x3::parse(iter, end, start_rule(), attr);
}
