#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//This will not swap a and b --->call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//This will swap a and b --->call by reference
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//This will swap a and b --->call by reference(using c++ reference variables)
// void swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

//We can also return values using reference variables..
int & swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is " << sum(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y);     //This will not swap a and b
    // swapPointer(&x, &y);     //This will swap a and b using call by reference(pointer)
    // swapReferenceVar(x, y);   //This will swap a and b using call by reference(c++ reference variable)
    swapReferenceVar(x, y) = 766;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}