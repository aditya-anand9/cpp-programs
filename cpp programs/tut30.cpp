#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your numbers is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(int x, int y){     // --->This is a parameterized constructor as it takes 2 parameters.
    a = x;
    b = y;
}


int main()
{
    //Implicit call
    complex a(4, 6);
    a.printNumber();

    //Explicit call
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}