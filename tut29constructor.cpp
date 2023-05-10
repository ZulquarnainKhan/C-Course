#include<iostream>
using namespace std;

//-------------------------- CONSTRUCTORS IN C++ ----------------------------------
// constructor is special member function with same name as of the class
// when ever an object is created, constructor is automatically invoked(called/execute) 
// It is used to initialise the object of its class. 


/* PROPERTIES OF CONSTRUCTORS:
1. It should be  declared in public section of the class
2. They are automattically invoked whenever an object is created
3. They cannot return values and they do not have return types 
4. It can have default arguments 
5. We can not refer to their address

*/


class complex{
    private:
        int a,b;
    public:
        complex(void);        // Constructor Declaration [class name and constructor name must always have same name]

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){  //------> This is known as default constructor as it takes no parameters i.e it takes Void

    a=10;
    b=4;
}

int main(){
    complex c1 ,c2;
    c1.printNumber();
    c2.printNumber();
    
    return 0;
}