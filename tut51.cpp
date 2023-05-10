#include<iostream>
using namespace std;

// ------------------ Pointer to Objects And Arrow Operator (->) -------------------------

class Complex{
    private:
        int real ,imaginary;
    public:
        void setData(int x, int y){
            real=x;
            imaginary=y;
        }

        void printData(){
            cout<<"The complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
        }
        
};

int main(){
    //Complex c1;
    //Complex *ptr = &c1;         // We have made a pointer named 'ptr' that points object c1

    Complex *ptr = new Complex;     // We can also do the above this way using 'new' operator and make many objects at a time

    //(*ptr).setData(3,4);      // Using parantheses is compulsary '()'   EX: (*ptr)

    ptr->setData(3,4);          // can also use arrow operator (->) in place iof derefernce opperator 
    (*ptr).printData();        
    
    Complex *ptr1 = new Complex[4]; 
    (ptr1)->setData(1,5);     
    (ptr1)->printData();         // This will print data only for 1st object, to print data or setData to other objects we use ptr+1 ,ptr+2 etc.

    (ptr1+1)->setData(7,9);     
    (ptr1+1)->printData();       // This will print data of 2nd object 

    return 0;
}