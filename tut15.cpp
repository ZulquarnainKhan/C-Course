#include<iostream>
using namespace std;

int sum(int a, int b){          // We have made a function 'sum()' 
    int c=a+b;                  // Which takes two integers and returns their addn/sum
    return c;                   // Here we can not write sum(int a,b){} we have to write sum(int a,int b){}
};

void g(){
    cout<<"Your operation is over";
};

int main(){
    int num1,num2;
    cout<<"Enter num1 : "<<endl;
    cin>>num1;
    cout<<"Enter num2 : "<<endl;
    cin>>num2;

    cout<<"The sum of both nos is : "<<sum(num1,num2)<<endl;
    // In sum function sum() the return value function key is sum(num1,num2)
    // As in  function main() the return value function key was 'return 0;'
    g();
    return 0;
};