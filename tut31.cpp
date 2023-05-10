#include<iostream>
using namespace std;

//----------------------- CONSTRUCTOR OVERLOADING -------------------------------------------
// We can make multiple constructors and depending upon the no or type of constructor
// respective function of the constructor runs

class Complex{  
    private:
        int a ,b;
    public:
        Complex(int ,int);   // 1.Constructor having 2 parameters
        Complex(int);        // 2.Constructor having 1 parameter
        Complex();       // 3.Constructor having void data or no parameters
        
        void printData(void){
            cout<<"The given complex number is "<<a<<" + "<<b<<"i"<<endl;
        } 
};

Complex::Complex(int x, int y){
    a=x;
    b=y;
}

Complex::Complex(int x){
    a=x;
    b=0;
}

Complex::Complex(){     // Default constructor
    a=0;
    b=0;
}


int main(){

    Complex c1(4,5);    // 1st constructor runs as it have 2 integer type parameters
    c1.printData();

    Complex c2(3);      // 2nd constructor runs as it have 1 integer type parameters
    c2.printData();

    Complex c3;       // 3rd constructor runs as no data is put inside(void) & it is a default constructor
    c3.printData();

    return 0;
}