#include <iostream>
using namespace std;

int main() {
    int a;
    int b;


    //input a
    cout<<"enter a : ";
    cin>>a;

    //input b
    cout<<"enter b : ";
    cin>>b;

    //calculate sum
    int sum = a + b;
    int prod = a*b;

    cout<<"Sum of a & b = " << sum<<endl;
    cout<<"Product of a & b = " << prod<<endl;

    return 0;
}