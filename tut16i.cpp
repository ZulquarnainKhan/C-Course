#include<iostream>
using namespace std;


void swap_referenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
};

int main(){
    int x=4,y=5;
    cout<<"The value of x is : "<<x<<" The value of y is : "<<y<<endl;

    swap_referenceVar(x,y);
    // Will swap a and b using reference variable

    cout<<"The value of x is : "<<x <<" The value of y is : "<<y<<endl;
    
    return 0;
};