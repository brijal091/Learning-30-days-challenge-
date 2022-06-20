#include<iostream>
#include<string>
using namespace std;

int main(){
    string food = "Pizza";
    string* pFood = &food;

    cout << "Food: " << food << endl;
    cout << "pFood: " << pFood << endl;
    cout << "&food: " << &food << endl;
    cout << "&pFood: " << &pFood << endl;

    // changing the value of the pointer
    // changed value of the pointer
    cout << "Changing the value of the pointer" << endl;
    *pFood = "Burger";
    cout << "Food: " << food << endl;
    cout << "pFood: " << pFood << endl;
    cout << "&food: " << &food << endl;
    cout << "&pFood: " << &pFood << endl;

    return 0;
}