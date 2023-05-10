#include<iostream>
using namespace std;

//------------------ AMBIGUITY RESOLUTION IN INHERITANCE -----------------------
// Ambiguity come swhen in a program more than one base class have the same function by name 
// here 'greet()', thus if we inherit from both of them and call greet() in derived class then it will give an error.

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Hellow "<<endl;
        }
};

class Derived : public Base1 , public Base2{
    public:
        void greet(){
            Base1::greet();    // This is known as ambiguity resolution technique
        }                      // If we dont mention this then compiler will get confused which greet() to run.
};

int main(){
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    Derived d1;
    d1.greet();          // This will give an error, if we doesnot mention the ambiguity of greet() function
    
    return 0;
}