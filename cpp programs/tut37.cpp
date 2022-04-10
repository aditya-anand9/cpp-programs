#include <iostream>
using namespace std;

//Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public visibility mode: public member of the base class become public member of the derived  class
3. Private visibility mode: public member of the base class become private member of the derived  class
4. Private members are never inherited
*/

//Creating a programmer class derived from Employee base class
class programmer : public Employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), aditya(2);
    cout << harry.salary << endl;
    cout << aditya.salary << endl;
    programmer skillf(3);
    cout << skillf.languageCode<<endl;
    cout << skillf.id<<endl;
    skillf.getData();
    return 0;
}