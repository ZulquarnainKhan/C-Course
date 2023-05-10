#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(int x=0,int y=0){
            a=x;
            b=y;
        }

        void printData(){
            cout<<"the real and imaginary part is "<<a<<" + "<<b<<"i"<<endl;
            
        } 
};


int main(){
    Complex c1(4,3);
    c1.printData();
    Complex c2(5);
    c2.printData();
    Complex c3;
    c3.printData();
    
    return 0;
}