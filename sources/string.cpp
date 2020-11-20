// begin config options for C++
#include <iostream>

using namespace std;
// end config options

// main func to contain code
int main()
{
  // setting variables an learning string usage
  char grade = 'A';     // character var that only uses single quotes with one character
  string name = "John"; // specify the type then var name
  string phrase = "Bearning something new";
  phrase[0] = 'L'; // modify var with indexing
  int age;         // init intiger type with the name CANNOT USE DESIMALS
  age = 50;
  double gpa = 3.5; // stores more dec than floats for specificity
  bool isMale = true;

  cout << "Hello " << name << endl;      // cout = const that displays in output and endl = end line
  cout << "Hello " << age << " Again\n"; // \n = new line
  cout << phrase << endl;
  cout << phrase.find("new", 0) << endl; // passing arg. First param is what to find, second is where to start looking
  cout << phrase.substr(3, 5) << endl;   // passing arg. First param is starting index, second is how many to grab

  printf("Hello World");

  return 0; // needed to run code
}