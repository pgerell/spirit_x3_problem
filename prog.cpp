#include "common.hpp"

int main() {
  std::string input = "c123";
  auto iter = input.cbegin();
  auto end = input.cend();
  ast::Start attr;
  return x3::parse(iter, end, start_rule(), attr);
}
