#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    //Creating a Constructor
    //constructor is a special member function with same name as of the class.
    //It is automatically invoked whenever an object is created
    //It is used to initialize the objects of its class

    complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your numbers is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void){     // --->This is a default constructor as it takes no parameter.
    a = 0;
    b = 0;
    // cout<<"Hello world!"<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

//Characteristics of the Constructors

/*1.It should be declared in the public section of the class
  2.They are automatically invoked whenever the object is created 
  3.They cannot return values and do not have return types
  4.It can have default arguments
  5.We cannot refer to their address
*/