#include<iostream>
using namespace std;

inline int prod(int c,int d){   // Inline function help us to reduce compiling time
                                // in case of repetative calling of same function.
    return c*d;                 // Inline func simply put 'a*b' in place of prod(a,b) if it is called more than one time.
                                // the function did not go on executing from starting everytime, saving time
};
// We do not use inline function everytime (static func etc ----> in tut17i.cpp)
// because if the func is big then the memory(ram) it stores while executing will be huge.
// Thats why we usenit in small and repetetive functions.


int main(){
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;
    cout<<"The product of the required nos are : "<<prod(a,b)<<endl;


    return 0;
};