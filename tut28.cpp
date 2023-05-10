#include<iostream>
using namespace std;

class Y; // Forward declaration

class X{
    int data;
    public:
        friend void add(X,Y);
        void setValue(int value){
            data = value;
        }      
};

class Y{
    int num;
    public:
        friend void add(X,Y);
        void setValue(int value){
            num = value;
        }    
};

void add(X o1,Y o2){
    cout<<"Summing data of X and Y object gives us "<<o1.data + o2.num<<endl;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1,b1);

    return 0;
}