#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a;


    //Constants in c++ (value can't be changed after initializing)
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;                        //-------->You will get an error because a is a constant
    // cout<<"The value of a is: "<<a;


    //*****MANIPULATORS IN C++(endl, setw)*****
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


    //OPERATOR PRECEDENCE
    int a = 3, b = 4;
    // int c = (a*5)+b;               //---->Here, operator precedence of * is greater than +
    int c = ((((a*5)+b)-45)+87);   //----->here, operator precedence of * is greater than + and - and operator precedence of + and - is same so,we use associativity which is left to right for + and - . for more info. visit en.cppreference.com
    cout<<c;
    
    return 0;
}