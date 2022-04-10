#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n";   // '<<' is called Insertion operator
    cin>>num1;                            // '>>' is called extraction operator

    cout<<"Enter the value of num2:\n";
    cin>>num2;

    cout<<"sum of num1 and num2 is: "<< num1 + num2;
    return 0;
}
