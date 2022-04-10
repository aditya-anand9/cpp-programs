#include<iostream>
using namespace std;

//Forward Declaration
class y;

class x{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(x, y);
};

class y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(x, y);
};

void add(x a1 , y b1){
    cout<<"Summing data of x and y objects gives me "<<a1.data + b1.num<<endl;
}

int main()
{
    x a1;
    a1.setValue(3);

    y b1;
    b1.setValue(15);

    add(a1, b1);

    return 0;
}