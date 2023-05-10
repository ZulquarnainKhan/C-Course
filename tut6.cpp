#include<iostream>

//#include"this.h"
 using namespace std;
int main(){
    int a ,b ;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;    

    cout<<"Operators in c++:"<<endl;
    cout<<"The following are the typos of operators in c++ :"<<endl<<endl;
    // arithmatic operators
    cout<<"The following are the types of arithmstioc operators :"<<endl;
    cout<<"The value of a-b is :"<<a-b<<endl;
    cout<<"The value of a+b is :"<<a+b<<endl;
    cout<<"The value of a*b is :"<<a*b<<endl;
    cout<<"The value of a/b is :"<<a/b<<endl;
    cout<<"The value of a%b is :"<<a%b<<endl;
    cout<<"The value of a++ is :"<<a++<<endl;
    cout<<"The value of a-- is :"<<a--<<endl;
    cout<<"The value of ++a is :"<<++a<<endl;
    cout<<"The value of --a is :"<<--a<<endl<<endl;
    
    //assignment operators
    //used to assign values to  variables
    //example : int, float, bool, char etc.


    //comparission operators
    cout<<"The following are the types of comparission operators :"<<endl;
    cout<< "The value of a==b is: "<<(a==b)<<endl;
    cout<< "The value of a!=b is: "<<(a!=b)<<endl;
    cout<< "The value of a>=b is: "<<(a>=b)<<endl;
    cout<< "The value of a<=b is: "<<(a<=b)<<endl;
    cout<< "The value of a>b is: "<<(a>b)<<endl;
    cout<< "The value of a<b is: "<<(a<b)<<endl<<endl;


    //logical operators
    cout<<"The following are the types of logical operators :"<<endl;
    cout<< "The value of logical and operator in ((a==b)&&(a<b)) is: "<<((a==b)&&(a<b))<<endl;
    cout<< "The value of logical or operator in ((a==b)||(a<b)) is: "<<((a==b)||(a<b))<<endl;
    cout<< "The value of logical not operator in (!(a==b)) is: "<<(!(a==b))<<endl<<endl;
    


    return 0;
}