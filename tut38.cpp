#include<iostream>
using namespace std;

class Base{
    private:
        int data1;     // private data and it is not inheritable by derived class
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base::setData(){
    cout<<"Enter data 1 : "<<endl;
    cin>>data1;
    data2=20;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}

class Derived : public Base{        // Class is been derived publically
    int data3;
    public:
        void process();
        void display();
};

void Derived::process(){
    data3=data2*getData1();
}

void Derived::display(){
    cout<<"Value of Data1 is "<<getData1()<<endl;
    cout<<"Value of Data2 is "<<data2<<endl;
    cout<<"Value of Data3 is "<<data3<<endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    
    return 0;
}