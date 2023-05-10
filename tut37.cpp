#include<iostream>
using namespace std;

class Employee{     // Base class 
    
    public:
        int id;             // Here id and salary are public data of Employee thus
        float salary;       // they will become peivate data of derived class as, visibilty code take private as default

        Employee(){};     // Default constructor  

        Employee(int x){   // Parametised constructor
            id=x;
            salary=150;
        }

};

/* Derived class syntax :

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

/* NOTE :
1. Default visibility mode is private
2. PRIVATE VISIBILITY MODE: public member of the base class becomes private member of derived class
3. PUBLIC VISIBILITY MODE: public member of the base class becomes public member of derived class
4. PROTECTED VISIBILITY MODE: 'tut39.cpp'
5. Private members are never inherited
*/

// Creating a derived class named 'Programmer' from 'Employee' Base class
class Programmer : private Employee{
    public:
        int languageCode = 9;
        Programmer(int x){
            id=x;
        }

        void printData(){
            cout<<id<<endl;
        }
};


int main(){
    Employee Dhono(1);
    Employee Biju(2);

    cout<<Dhono.salary<<endl;
    cout<<Biju.salary<<endl;

    Programmer skillF(3);  
    cout<<skillF.languageCode<<endl; 
    skillF.printData();               // To print 'id' we need a function as it is private in Programmer class


    return 0;
}