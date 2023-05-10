#include<iostream>
using namespace std;

//------------------------ POINTER TO DERIVED CLASSES IN C++ --------------------------

class Base{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl<<endl;
        }

};

class Derived : public Base {
    public:
        int var_derived;
        void display(void){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }

};

int main(){
    Base obj_Base;
    Derived obj_derived;

    Base *base_class_pointer;
    base_class_pointer = &obj_derived;     // A Base class pointer is pointer, pointing towards Derived class object

    base_class_pointer->var_base = 34;
    //base_class_pointer->var_derived = 45;  // This will throw an error as the pointer is of base class and base class doensnot have var_derived

    base_class_pointer->display();     // This will run base class display as it a base class pointer infact having a derived object as address


    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 45;
    derived_class_pointer->display();

    
    return 0;
}