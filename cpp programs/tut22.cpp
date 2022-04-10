// OOPs - Classes and objects

// C++ --> Initially called --> C with classes by stroustroup
// class --> extension of structures (in c)
// Structures had limitations
//       - members are public
//       - No methods
// Classes --> Structures + more
// Classes --> can have methods and properties
// Classes --> can make few members as private & few as public
// Structure in c++ are typedefed
// you can declare objects along with the class declaration like this:
/* class Employee{
            //Class definition
              } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

//Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();jh
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}