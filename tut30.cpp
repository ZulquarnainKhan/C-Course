#include<iostream>
using namespace std;

//---------------------- PARAMETURISED CONSTRUCTORS ------------------------------
class complex{
    private:
        int a , b;
    public:
        complex(int x ,int y);    // Constructor declaration

        void printData(){
            cout<<"The given complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex::complex(int x, int y){    //-----> Parameterised Constructor as it takes 2 integers
    a=x;
    b=y;
    }


int main(){
    complex c1(1,2);   //-----> Implicit call
    c1.printData();

    complex c2 = complex(3,4);  //-----> Explicit call
    c2.printData();

    
    
    return 0;
}