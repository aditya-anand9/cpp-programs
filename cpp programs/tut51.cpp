#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setdata(1, 54);   is exactly same as 
    ptr->setdata(1, 54);  // ptr-> (means, dereference)

    // (*ptr).getdata(); is same as
    ptr -> getdata();


    // Array of objects
    complex *ptr1 = new complex[4];
    ptr1->setdata(1, 4);
    ptr1->getdata();
    return 0;
}