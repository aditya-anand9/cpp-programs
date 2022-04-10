//lecture 42. solution..
#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
    int a, b;
    public:
        void getdataSimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performoperationsSimple(){
            cout<<"The value of a+b is: "<<a + b<<endl;
            cout<<"The value of a-b is: "<<a - b<<endl;
            cout<<"The value of a*b is: "<<a * b<<endl;
            cout<<"The value of a/b is: "<<a / b<<endl;
        }
};

class scientificcalculator{
     int a, b;
    public:
        void getdataScientific(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performoperationsScientific(){
            cout<<"The value of cos a is: "<<cos(a)<<endl;
            cout<<"The value of sin a is: "<<sin(a)<<endl;
            cout<<"The value of exp a is: "<<exp(a)<<endl;
            cout<<"The value of tan a is: "<<tan(a)<<endl;
        }
};


class hybridcalculator : public simplecalculator, public scientificcalculator{

};

int main()
{
    // simplecalculator calci;
    // scientificcalculator calci;
    // calci.getdata();
    // calci.performoperations();

    hybridcalculator calci;
    calci.getdataScientific();
    calci.performoperationsScientific();
    calci.getdataSimple();
    calci.performoperationsSimple();
    return 0;
}