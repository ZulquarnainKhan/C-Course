#include<iostream>
using namespace std;
int main(){
    const int a=3;
    cout<<"The value of a will always be : "<<a<<endl;
    a=45;
    //we will get an error because a is a constant 
    //and read only value as we have assigned const
    cout<<"the value of a will be: "<<a<<endl;





    return 0;
}