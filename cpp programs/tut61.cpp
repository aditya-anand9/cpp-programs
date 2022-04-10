// C++ : File I/O [READING & WRITING TO A FILE]

// 3 useful classes
  //1. fstreambase
  //2. ifstream --> derived from 1     //these all 3 comes from <fstream> header file
  //3. ofstream --> derived from 1


// READ OPERATION (read from "this.txt")
  // ifstream in("this.txt");
  // string st;
  // in>>st;      //just like Cin


// Write operation (write in "this.txt")
  // ofstream out("this.txt");
  // string st = "Aditya";
  // out<<st;


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream hout("sample60.txt");
    cout<<"Enter your name";
    string name;
    cin>>name;

    hout<<name + " is my name ";
    hout.close();



    //Reading from a file
    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();

    return 0;
}
