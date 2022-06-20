#include <iostream>
#include <string>
using namespace std;

// Practicing math module in c++
#include <cmath>

int main() {
  string name;
  cout << "Hello World! \n";
  name = "Brijal Kansara \n";
  cout << name[0] << endl;
  cout << name << endl;
  name[0] = 'A';
  cout << name;

string fullName;
cout << "Type your full name: " << endl;
cin >> fullName;
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John


// To dela with this kind of errors we use getline function to get the whole line
string fName;
cout << "Type your full name: ";
getline (cin, fName);
cout << "Your name is: " << fName;

cout << sqrt(64);
cout << round(2.6);
cout << log(2);
  return 0;
}