#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    // marks[1] = 95;       --->You can change the value of an array.
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;



    //print arrays using loops
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }



    //Pointers with arrays
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    
    return 0;
}