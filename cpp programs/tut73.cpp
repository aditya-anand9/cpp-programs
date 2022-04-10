//STL MAPS

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap ["Aditya"] = 98;
    marksMap ["Ankit"] = 45;
    marksMap ["srivastva"] = 9;

    marksMap.insert({{"shinchan", 169}, {"rigichi", 189}});

    map<string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The Size is: "<<marksMap.size()<<endl;
    return 0;
}