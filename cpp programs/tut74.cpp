//Function objects (Functor) -> Function wrapped in a class so that it available like an object 

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 387, 4, 120, 54, 77};
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}