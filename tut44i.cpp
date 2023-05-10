#include<iostream>
using namespace std;

class Base1{
    public:
        void say(){
            cout<<"HELLOW WORLD"<<endl;
        }
};

class Derived1 : public Base1{
    public:
        void say(){              // This Derived class say() will overide the Base class say() 
            cout<<"HELLOW WORLD MY WORLD"<<endl;   // Here ambiguity is resolved by default
        }
    
};

int main(){
    Base1 b1;
    b1.say();

    Derived1 b2;
    b2.say();
    
    return 0;
}