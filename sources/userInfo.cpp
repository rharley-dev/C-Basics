// begin config options for C++
#include <iostream>

using namespace std;
// end config options

// main func to contain code
int main()
{
  int age;
  string name;

  cout << "Enter your age: ";
  cin >> age; // c in = using inputs

  cout << "Enter your name: ";
  cin >> name;

  cout << "You are " << age << " years old" << endl;
  cout << "Hello " << name << endl;

  return 0;
}