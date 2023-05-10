#include<iostream>
using namespace std;


// Function prototype : If the function is not declared in scope or is written after main() function
// then we can use prototype to assure the program that sum() function is somewhere iun the program and keep looking for it.

// Syntax of function prototype :
// Datatype function_name (anguments);

int sum(int a,int b); //---> Acceptable
// int sum(int a, b); ----> Not acceptable 

void g();

int main(){
    int num1,num2;
    cout<<"Enter num1 : "<<endl;
    cin>>num1;
    cout<<"Enter num2 : "<<endl;
    cin>>num2;

    // num1 and num2 are 'actual parameters'.

    cout<<"The sum of both nos is : "<<sum(num1,num2)<<endl;

    g();
    
    
    return 0;
};

int sum(int a, int b){ 
    // a and b are taking values from actual parameters num1, num2
    // Thus a and b are 'former parameters'.
     
    int c=a+b;                 
    return c;                   
};
// It will give an error as sum was not declared in ths int main() scope
// If we use a function prototype then it will not give an error.

void g(){
    cout<<"Have a nice day "<<endl;
};