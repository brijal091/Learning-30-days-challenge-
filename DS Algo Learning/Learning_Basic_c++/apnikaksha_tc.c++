#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i = n,a=0;
    while (i >= 1) {
        a = a+1;
        i /= 2;
    cout<<"i is: "<<i<<endl;
    }
    cout<<"a is: "<<a;

    return 0;
}