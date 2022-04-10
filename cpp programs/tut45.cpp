//Virtual base class..
/*
student --> test
student --> sports
test --> result
sports --> result
*/
#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"your roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }
            void print_marks(void){
                cout<<"your result is here: "<<endl
                    <<"Maths: "<<maths<<endl
                    <<"Physics: "<<physics<<endl;
            }
};


class sports: virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};


class result: public test, public sports{
    private: 
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main()
{
    result aditya;
    aditya.set_number(420);
    aditya.set_marks(78.9, 99.5);
    aditya.set_score(9);
    aditya.display();
    return 0;
}
