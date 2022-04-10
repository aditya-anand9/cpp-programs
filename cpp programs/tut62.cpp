#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me\n";
    out<<"This is fucking me";
    out.close();
    

    //Read
    ifstream in;
    in.open("sample60.txt");
    string st;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    

    // in>>st;
    // cout<<st;
    in.close();
    return 0;
}