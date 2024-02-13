#include <iostream>
int main() {
  int a = 1;
  int b = 2;

  int temp = b;
  b = a;
  a = temp;
  // equivalent to print in python, console.log, system.out.print
  //<<std::endl is used to print on another line
  std::cout << b << std::endl;
  std::cout << a << std::endl;
  return 0;
}