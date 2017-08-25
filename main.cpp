#include <iostream>
#include <string>
#include <memory>

auto hello_cpp14() {
  return std::string("Hello world!");
}

int main() {
  auto hello = std::make_unique<std::string>(hello_cpp14());
  std::cout<<*hello<<std::endl;
}
