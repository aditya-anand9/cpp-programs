#include<iostream>
using namespace std;

inline int product(int x, int y){
    //Not recommended to use below lines with inline functions
    // static int c=0;   //This ececutes only once
    // c = c + 1;        //Next time this function is run, the value of c will be retained
    return x*y;
}

float moneyReceived(int currentMoney, float factor = 1.04){      //Default argument
    return currentMoney * factor;
}

// int strlen(const char* p){

// }


int main()
{
    int a, b;
    int money = 100000;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"for VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year";
    return 0;
}