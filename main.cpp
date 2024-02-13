#include <iostream>
int main() {
  int a = 1;
  int b = 2;

  int temp = b;
  // equivalent to print in python, console.log, system.out.print
  //<<std::endl is used to print on another line
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;

  b = a;
  a = temp;

  // << output stream
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  return 0;
}