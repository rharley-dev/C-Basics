// begin config options for C++
#include <iostream>
#include <cmath> // importing math functions

using namespace std;
// end config options

// main func to contain code
int main()
{
  int num = 5;
  num++;     // adding 1 to the var
  num += 50; // adding 50 to num

  cout << pow(2, 5) << endl;  // raising 2 to the power of 5
  cout << sqrt(36) << endl;   // squaring
  cout << fmax(3, 4) << endl; // comparing to find largest num
  cout << num << endl;
  cout << 40 % 7; // modulous operator that gives the remainder

  return 0;
}