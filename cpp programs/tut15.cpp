#include<iostream>
using namespace std;

int sum(int a, int b);    //function prototype -----> syntax: type function-name(arguments)
void g(void);     // or can be written as void g();

int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);    //Num1 and Num2 are actual parameters
    g();
    return 0;
}

int sum(int a, int b) {
    int c = a + b;      //formal parameters a and b will be taking values from actual parameters num1 and num2
    return c;
}

void g(){
    cout<<"\nHello, be like turtle..";
}