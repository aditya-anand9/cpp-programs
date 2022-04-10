#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;


union money
{
    int rice;   //4
    char car;   //1       //--->in union,we can use any one among them,that's why it provides better memory management.
    float pounds;  //4
};

int main()
{
    // struct employee harry;
    // ep rohanDas;                 //--->ep is same as struct employee because of typedef

    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    // rohanDas.eId =2;
    // rohanDas.favChar = 'z';
    // rohanDas.salary = 190000;
    // cout<<"The value is "<<rohanDas.eId<<endl;
    // cout<<"The value is "<<rohanDas.favChar<<endl;
    // cout<<"The value is "<<rohanDas.salary<<endl;


    // union money m1;
    // m1.rice = 34;     
    // m1.car = 'c';  
    // cout<<m1.car;  //-->if we print cout<<m1.rice then,we'll get garbage value because m1.car overwrites m1.rice.
    // return 0;


    enum meal{breakfast, lunch, dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;    //---> output is 012(0 for breakfast, 1 for lunch and 2 for dinner)

    meal m1 = lunch;
    cout<<m1;     //-->output is 1 in case of lunch
    //cout<<(m1==1);   //--->output is 1 because m1(lunch) is equal to 1.
}