// begin config options for C++
#include <iostream>

using namespace std;
// end config options

// main func to contain code
int main()
{
  // setting variables
  char grade = 'A';     // character var uses single quotes
  string name = "John"; // specify the type then var name
  int age;              // init intiger type with the name CANNOT USE DESIMALS
  age = 50;
  double gpa = 3.5; // stores more dec than floats for specificity
  bool isMale = true;

  cout << "Hello " << name << endl; 
  cout << "Hello " << age << " Again" << endl;

  printf("Hello World");

  return 0; // needed to run code
}