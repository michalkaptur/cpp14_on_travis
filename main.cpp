#include <iostream>
#include <string>

auto hello_cpp14() {
  return std::string("Hello world");
}

int main() {
  std::cout<<hello_cpp14()<<std::endl;
}
