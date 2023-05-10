#include<iostream>
using namespace std;

//--------------------------------FUNCTION OVERLOADING----------------------------------------
// Using concept of function overloading we can use same function to do multiple different works 
// Just by alloting different no of arguments.     

int add(int a,int b){                               // If we give the func 'add' 2 arguments then the function will run this
    cout<<"Using func with two arguments"<<endl;
    return a+b;
}
int add(int a,int b,int c){                         // If we give add func 3 arguments then the function will run this
    cout<<"Using func with 3 arguments "<<endl;
    return a+b+c;
}



double volume(double r,int h){      // If we give the func 'volume' 2 arguments then the function will run this
    return 3.14*(r*r)*h;
}
int volume(int a){                  // If we give 1 argument under func 'volume' then the func will run this
    return a*a*a;
}
int volume(int l,int b ,int h){     // If we give 3 arguments then the function will run this
    return l*b*h;
}



int main(){

    cout<<"The sum of 3 and 6 is : "<<add(3,6)<<endl;                 // We have given 2 arguments
    cout<<"The sum of 3, 7 and 6 is : "<<add(3,7,6)<<endl;            // We have given 3 arguments
    
    cout<<"Volume of cylinder of radius 0.2 and height 2 is : "<<volume(0.2,2)<<endl;   // We have given 2 arguments
    cout<<"Volume of cube of side 2 is : "<<volume(2)<<endl;                            // We have given 1 arguments
    cout<<"Volume of cuboid of l=1, b=1 and height 2 is : "<<volume(1,1,2)<<endl;       // We have given 3 arguments

    
    return 0;
}