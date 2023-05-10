#include<iostream>
using namespace std;

//------------ constructor with default arguments--------------------

class Simple{
    int data1 , data2 , data3;
    public:
        Simple(int a , int b=9 , int c=3){  // Parameterised Constructor with default arguments
            data1=a;              // Here if the user doesnot enter any value of b, then b will take default value 9
            data2=b;              // similarly c is a default argument of constructor
            data3=c;
        }

        void printData(){
            cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
        }


};

int main(){
    Simple s1(1,4,7);   // Here all 3 parametes and there value is present
    s1.printData();

    Simple s2(5,2);     // Here only 2 parameters and there value is present then 
    s2.printData();     // third parameter must show its default value
    
    Simple s3(1);       // Here only 1 parameters and there value is present then 
    s3.printData();     // second and third parameter must show its default values

    return 0;
}