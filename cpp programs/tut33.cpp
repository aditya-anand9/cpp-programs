#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}  //--->it is necessary
        BankDeposit(int p, int y, float r); //r(interest rate can be a value like 0.04)
        BankDeposit(int p, int y, int r); //r(interest rate can be a value like 14)
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);   //if i deposit 100 rupees for 1 year at 0.04 interest rate i will get: 100*(1+r) = 104 rupees
    }

}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float (r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
    <<". Return value after "<<years
    <<" years is "<<returnValue<<endl<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    // bd3.show();   //->it shows garbage value

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}