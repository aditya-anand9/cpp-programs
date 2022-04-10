#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

// Step by step calculation of factorial (4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;


//For fibonacci, recursion is not best algorithm because we call same value multiple times.
//i.e; fibonacci(5)
//      fibonacci(3) + fibonacci(4)
//      fibonacci(1) + fibonacci(2) + fibonacci(2) + fibonacci(3)
int fibonacci(int n) {
    if (n < 2)
    {
        return 1;
    }
    
    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    //Factorial of a number
    //6! = 6*5*4*3*2*1 = 720
    //n! = n * (n-1)!

    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    //for finding fibonacci of nth term
    cout << "The term in fibonacci sequence at posotion " << a << " is " << fibonacci(a) << endl;
    return 0;
}