#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int* b = &a;             // int* b = &a or int* b; b = &a; both are same

    // & --->(Address of) operator
    cout<<"The adddress of a is "<<b<<endl;
    cout<<"The adddress of a is "<<&a<<endl;

    // * --->(Value at) Dereference operator
    cout<<"The value at adddress b is "<<*b<<endl;

    //Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;

    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is  "<<**c<<endl;
    return 0;
}