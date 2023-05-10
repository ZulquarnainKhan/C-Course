#include<iostream>
#include<iomanip>

//Here we are stuying about the manipulators 
//1.endl : used to end existing line and create new line
//2.setw : used to set/adjust the width of the indentation of product we run.
//We can use setw by importing iomanip header file.

using namespace std;
int main(){
    int a=3 , b=78 , c=783;

    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;

    cout<<"the value of a using setw is : "<<setw(6)<<a<<endl;
    cout<<"the value of b using setw is : "<<setw(6)<<b<<endl;
    cout<<"the value of c using setw is : "<<setw(6)<<c<<endl;
    
    return 0;
}    