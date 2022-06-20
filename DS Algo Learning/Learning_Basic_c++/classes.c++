#include<iostream>
#include<string>
using namespace std;

// class MyClass
// {
// public:
//     int x = 5,y = 10;
// };

// int main(){
//     MyClass obj;
//     cout<<obj.x<<endl;
//     cout<<obj.y<<endl;
// }

// Function inside the class 
// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }


// Using the function outside the class using :: operator
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}