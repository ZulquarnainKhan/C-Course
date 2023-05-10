#include<iostream>
using namespace std;

/* -------------- CONSTRUCTOR IN DERIVED CLASSES ---------------------
    1. We can use constructors in derived classes in c++
    2. If base class constructor doesnot have any arguments there is no need of any constructor in derived class
    3. But if there are one or more arguments in the base class constructor,
       derived class need to pass arguments to the base class constructor
    4. If both base and derived classes have constructors, base class constructor is execute first.

CONSTRUCTORS IN DIFFERENT TYPE OF INHERITANCES :
    1. In MULTIPLE INHERITANCE, base classes are constructed in the order in which they appear in the class declaration
    2. In MULTILEVEL INHERITANCE, the constructor are executed in the order of inheritance

SPECIAL SYNTAX :
    1. C++ supports syntax for passing arguments to multiple base classes
    2. The constructor of the derived class receives all the arguments at once and then
       will pass the calls to the respective base classes
    3. The body is called after all the constructor are finished executing.

    /*
    Derived-constructor(a1',a2',b1',b2',b3',c1',c2') : Base1(a1,a2) , Base2(b1,b2,b3){
        <body>
    }
    
*/

int main(){
    
    return 0;
}