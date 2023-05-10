#include<iostream>
using namespace std;

//-----------------------------Friend Class & Member Friend functions-----------------------------------------------

// Forward Declaration
class complex;        // This gaurantees the system that a class named 'complex' is coming 

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }

        int sumRealComplex(complex , complex);       // here we can't write, what the function does as o1.a and o2.a will be 'incomplete type'
// We have only defined class complex xin advance, but we haven't declared what o1.a and o2.a is.         
// Thus we write the function after the class 'complex' using scope resolution

        int sumImaginaryComplex(complex , complex);
};

class complex{
    int a,b;
    // 1.Indivisually declaring functions as friends
    //friend int Calculator :: sumRealComplex(complex , complex );        //Making a function of class Calculator friend of class complex
    //friend int Calculator :: sumImaginaryComplex(complex , complex );

    // 2.Alternately: Declaring entire class as friends
    friend class Calculator;

    public:
        void setNumber(int a1,int b1){
            a=a1;
            b=b1;
        }
        
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(complex o1, complex o2){          
    return (o1.a + o2.a);
}

int Calculator::sumImaginaryComplex(complex o1, complex o2){          
    return (o1.b + o2.b);
}

int main(){
    complex o1 , o2;
    o1.setNumber(1,4);
    o1.printNumber();

    o2.setNumber(5,7);
    o2.printNumber();


    Calculator RealCal;
    int result;
    result=RealCal.sumRealComplex(o1 ,o2);
    cout<< "THe sum of real part of o1 and o2 is "<<result<<endl;

    Calculator ImaginaryCal;
    int r;
    r=ImaginaryCal.sumImaginaryComplex(o1 ,o2);
    cout<< "THe sum of Imaginary part of o1 and o2 is "<<r<<endl;
    
    return 0;
}