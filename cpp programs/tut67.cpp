#include<iostream>
using namespace std;

// float Average(int x, int y){
//     float result = (x+y)/2.0;
//     return result;
// }

// float Average2(int x, float y){
//     float result = (x+y)/2.0;
//     return result;
// }

// DEFINING TEMPLATE FUNCTION
template<class T1, class T2>
float Average(T1 x, T2 y){
    float result = (x+y)/2.0;
    return result;
}


int main()
{
    float a;
    a = Average(5, 2);
    cout<<"Result is: "<<a<<endl;
    return 0;
}