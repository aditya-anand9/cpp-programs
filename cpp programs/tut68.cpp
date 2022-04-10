#include<iostream>
using namespace std;

template <class T>

class Aditya{
    public:
        T data;
        Aditya(T a){
            data = a;
        }

        void display();
};

template<class T>
void Aditya<T> :: display(){
            cout<<data;
        }

void func(int a){
    cout<<"I am First func()"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

int main()
{
    // Aditya<float> a(5.7);
    // cout<<a.data<<endl;
    // a.display();

    // func(4);    //Exact match takes the highest priority
    func1(4);

    return 0;
}