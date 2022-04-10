//There are two types of header files
//1. System header files: It comes with the compiler
#include<iostream>
//2. User defined header files: It is written by the programmer
//#include "this.h"          ---->This will produce an error if this.h is not present in the current directory
using namespace std;

int main() {
    int a=4, b=5;
    cout<<"Operators in c++:"<<endl;       //---->endl is used for new line same as \n
    cout<<"Following are the type of Operators in c++"<<endl;       
    //Arithmetic perators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++ a is "<<++a<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    cout<<endl;   //--->for new line

    //Assignment operators     //---->used to assign values to variables
    // int a = 3;
    // char d = '9';

    //Comparison operators
    cout<<"The values of a==b is "<<(a==b)<<endl;
    cout<<"The values of a!=b is "<<(a!=b)<<endl;
    cout<<"The values of a>=b is "<<(a>=b)<<endl;
    cout<<"The values of a<=b is "<<(a<=b)<<endl;
    cout<<"The values of a>b is "<<(a>b)<<endl;
    cout<<"The values of a<b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical operators
    cout<<"The values of ((a==b) && (a<b)) logical and operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The values of ((a==b) || (a<b)) logical or operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The values of (!(a==b)) logical or operator is "<<(!(a==b))<<endl;
    return 0;
}