#include<iostream>
using namespace std;

// When 'static variable' comes we must not use inline function 
// as static variable retains the value of variable after each and every step
inline int prod(int c,int d){   
    static int e=0;    //----> This executes only once       
    e=e+1;             // Next time when the func is called the value of e variable will be retained
    return c*d+e;      // 1st time e=0 ,2nd time e=1 ,3rd time e=2 ........and it goes one no of time we call the func                                           
};



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