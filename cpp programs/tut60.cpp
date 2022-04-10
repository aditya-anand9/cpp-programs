/*
The useful classes for working with files in c++ are:
 1. fstreambase
 2. ifstream -->derived from fstreambase
 3. ofstream -->derived from fstreambase
*/

/*
In order to work with files in c++, you will have to open it. primilarly,there are 2 ways to open a file:
 1. Using the constructor
 2. Using the member function open() of the class
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st = "Aditya bhai";
    string st2;
    // Opening file using constructor and writing it
    // ofstream out("sample60.txt");  // write operation
    // out<<st;

    // Opening file using constructor and reading it
    ifstream in("sample60b.txt");  // read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}