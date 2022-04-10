#include <iostream>
using namespace std;

int main()
{

    //*******Selection control structure: if else-if else ladder*******
    int age;
    cout << "Tell me your age " << endl;
    cin >> age;
    // if(age<18){
    //     cout<<"You can not come to my party!"<<endl;
    // }
    // else if (age == 18)
    // {
    //     cout<<"You are kid! come but take only softdrinks.."<<endl;
    // }
    // else
    // {
    //     cout<<"You can come to my party.."<<endl;
    // }

    //*******Selection control structure: Switch case statements*******
    switch (age)
    {
    case 18:
        /* code */
        cout << "You are 18" << endl;
        break;

    case 22:
        /* code */
        cout << "You are 22" << endl;
        break;

    case 2:
        /* code */
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    return 0;
}