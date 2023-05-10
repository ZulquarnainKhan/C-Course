#include<iostream>
using namespace std;

// SWAPPING FUNCTION USING TEMPLATES

template<class T>
int swapp(T &a , T &b){
    cout<<"Before swapping a and b "<<a<<" and "<<b<<endl;
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a and b is "<<a<<" and "<<b<<endl<<endl;
}

int main(){
    int x = 11 , y = 22;
    float a =4.5,b=5.45;
    char c1='M' , c2='R';
    swapp(x,y);
    swapp(a,b);
    swapp(c1,c2);

    
    return 0;
}