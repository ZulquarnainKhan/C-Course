#include<iostream>
using namespace std;

//------------------------- DESTRUCTOR IN C++ -------------------------------
// Destructor is called when the complier no longer needs the created object
// Destructor never takes an argument nor does it return any value
// Destructor is negation of constructor
// Destructor helps us in freeing up junk data that are no longer required in the program.


//int count=0;  // We can also use global variable for this purpose

class Num{
    private:
        static int count;
    public:
        Num(){           // Default constructor made
            count++;
            cout<<"This is the time when constructor is called for object "<<count<<endl;
        } 

        ~Num(){         // Destructor is called with till/negation(~) class name(Num) i.e. '~Num'
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }

};

int Num::count=0;


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object"<<endl;
    Num n1;

    {                                           // Block is created
        cout<<"Entering this block "<<endl;
        cout<<"Creating two more objects "<<endl;
        Num n2,n3;
        cout<<"Exiting this block "<<endl;

    }               // Block is ended thus the role of n2 and n3 objects are no longer needed thus destructor is called

    cout<<"Back to main"<<endl;

    return 0;       // The object num1 no longer needed thus the compiler calls the destructor

}