// Array of object using pointer..
#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<"code of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }
};

int main()
{
    int size = 3;
    //int *ptr = &size;
    //int *ptr = new int [4];

    //1. general store item
    //2. veggies item
    //3. hardware item

    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;    //because in 1st for loop ptr++ takes pointer above 3..
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p, q)
        ptr->setdata(p, q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    
    return 0;
}