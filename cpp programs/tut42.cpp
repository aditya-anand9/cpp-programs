#include<iostream>
using namespace std;

//problem on inheritance

class simpleCalculator{
    protected:
        int a, b, c;
    public:
        void add(float a, float b){
             c = a + b;
             cout<<"value of addition is "<<c<<endl;
        }

        void substract(float a, float b){
             c = a - b;
              cout<<"value of substraction is "<<c<<endl;
        }
};

class scientificCalculator{
    protected:
        int a1, b1, c1;

    public:
        void multiplication(float a1, float b1){
             c1 = (a1 * b1);
             cout<<"value of multiplication is "<<c1<<endl;
        }

        void division(int a1, int b1){
             c1 = float(a1 / b1);
             cout<<"value of division is "<<c1<<endl;
        }
};


class hybridCalculator : public simpleCalculator, public scientificCalculator{
    public:
        
};

int main()
{
    hybridCalculator p1;
    p1.add(5, 15);
    p1.substract(50, 15);
    p1.multiplication(2, 15);
    p1.division(15, 2);
    return 0;
}