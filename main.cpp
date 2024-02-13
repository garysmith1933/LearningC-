#include <iostream>
using namespace std;

// int main() {
//   int a = 1;
//   int b = 2;

//   int temp = b;
//   // equivalent to print in python, console.log, system.out.print
//   //<<std::endl is used to print on another line
//   cout << "a = " << a << endl;
//   cout << "b = " << b << endl;

//   b = a;
//   a = temp;

//   // << output stream
//   cout << "a = " << a << endl;
//   cout << "b = " << b << endl;
//   return 0;
// }

int main() {
  double sales = 95000;

  float state_tax = sales * 0.04;
  float county_tax = sales * 0.02;

  cout << "Current price is $" << sales << endl;

  cout << "With sales tax $" << sales + state_tax << endl;
  cout << "With county tax $" << sales + county_tax << endl;

  float sales_total = sales + state_tax + county_tax;

  cout << "Total price is $" << sales_total;
  return 0;
}