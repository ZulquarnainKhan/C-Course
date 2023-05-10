#include<iostream>
using namespace std;

class shopItem{
    int id;
    double price;
    static int count;
    public:
        void setData(){
            cout<<"Enter the code of item "<<count<<endl;
            cin>>id;
            cout<<"Enter the price of item "<<count<<endl;
            cin>>price;
            count++;
        }
        void printData(){
            count--;
            cout<<"Code of item "<<count<<" is "<<id<<endl;
            cout<<"price of item "<<count<<" is "<<price<<endl<<endl;
            
        }
};

int shopItem::count = 1;

int main(){
    int size = 3;
/*
Let we have three stores:
    1.computers
    2.vegetables
    3.furnitures
*/
    //int *ptr = &a;                 // Earlier we use to write like this
    //int *ptr = new int[4];         // Then we made this which creates 4 integers
                                     // new operator is used
    shopItem *ptr = new shopItem[size];      // shop is used like int, floats etc
    
    for(int i=0;i<size;i++){
        (ptr+i)->setData();
    }

    for(int i=2;(i<size)&&(i>=0);i--){
        (ptr+i)->printData();
    }

    

    return 0;
}