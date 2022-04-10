//Multiple inheritance : A derived class is formed from two base class
/*Syntax is:
        class derived: visibility-mode base1, visibility-mode base2
        {
            body of derived class
        };
*/

#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};


class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of base 1 is "<<base1int<<endl;
            cout<<"The value of base 2 is "<<base2int<<endl;
            cout<<"The sum of these values is "<<base1int + base2int<<endl;
        }
};

int main()
{
    Derived aditya;
    aditya.set_base1int(25);
    aditya.set_base2int(5);
    aditya.show();
    return 0;
}