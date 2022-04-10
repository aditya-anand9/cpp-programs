//Constructor in derived class..
/*
Case1:
class B: public A{
    //order of execution of constructor --> first A() then B() because base class constructor runs first..
};

Case2:
class A: public B, public C{
    //order of execution of constructor --> first B(), C() then A()
};

Case3:
class A: public B,virtual public C{
    //order of execution of constructor --> first C(), B() then A()
};
*/

#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void print_data1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void print_data2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void print_derivedData(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived aditya(1, 2, 3, 4);
    aditya.print_data1();
    aditya.print_data2();
    aditya.print_derivedData();
    return 0;
}