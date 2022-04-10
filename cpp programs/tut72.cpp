//List

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{
    list<int> :: iterator iter;
    for ( iter = l.begin(); iter != l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}

int main()
{
    list<int> list1;   //List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    //  list1.pop_front();       //pops starting element from the list
    // list1.remove(9);         //Removes "9" from list
    // list1.sort();           //Sorts the element of list1
    // display(list1);

    list<int> list2(3);   //Empty list of size 3
    list<int> :: iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);     //Merge list1 and list2
    cout<<"List1 after merging: ";
    display(list1);

    cout<<"List1 after reversing: ";
    list1.reverse();
    display(list1);


    return 0;
}