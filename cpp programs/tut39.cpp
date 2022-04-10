#include<iostream>
using namespace std;

class base{
    protected:                //protected is just like private but, it can be inherited in derived class
        int a;
    private:
        int b;

};

/*
For a protected member:
                                public derivation   private derivation  protected derivation
    1. private members           not inherited       not inherited       not inherited
    2. protected members         protected           private             protected
    3. public members            public              private             protected
*/

class Derived: protected base{

};

int main()
{
    base b;
    Derived d;
   // cout<<d.a;   //will not work because a is protected in both base as well as derived class
    return 0;
}