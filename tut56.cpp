#include<iostream>
using namespace std;

//------------------------ VIRTUAL FUNCTIONS --------------------------
// Run time polymorphism
/*
RULES FOR DECLARING VIRTUAL FUNCTION:
    1. They cannot be static
    2. They cannot be accessed by objects pointers
    3. virtual function cannot be a friend of another class 
    4. A virtual function in base class might not be used 
    5. A virtual function defined in the base class, there is no necessity of redifing it in the derived class
*/

class Base{
    public:
        int var_base=1;
        virtual void display(){     // Here we have mentioned 'virtual Base class display()', if Base pointer is made and is pointing towards
                                    // object of derived class then it will tell the compiler to run the Derievd class compiler
            cout<<"Displaying Base class variable var_base "<<var_base<<endl<<endl;
        }

};

class Derived : public Base {
    public:
        int var_derived=2;
        void display(void){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }

};

int main(){
    Base obj_Base;
    Derived obj_derived;

    Base *base_class_pointer;

    base_class_pointer = &obj_derived;   
    base_class_pointer->display();       // As Base display() is virtual function thus derievd display() will run.


    return 0;
}