#include<iostream>
#include<string>
using namespace std;

void printFood(){
    cout << "i am udf function" << endl;
}

// if we declare the above code after the main function: the it will give an error to solve this we can use declaration and defination of a function seperately.
void MyFunction();
int main(){
    cout << "i am main function" << endl;
    printFood();
    MyFunction();
    return 0;
}

void MyFunction(){
    cout << "i am MyFunction" << endl;
}