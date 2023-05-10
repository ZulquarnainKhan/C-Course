#include<iostream>
using namespace std;

class c2;

class  c1{
    int val1;
    public:
        void setData(int n){
            val1=n;
        }
        void display(){
            cout<<val1<<endl;
        }
        friend void exchange(c1 & , c2 & );     // exchange is a function that takes reference from c1 and c2 by using '&'(and percent)
};

class  c2{
    int val2;
    public:
        void setData(int n){
            val2=n;
        }
        void display(){
            cout<<val2<<endl;
        }
        friend void exchange(c1 & , c2 & );
};

/*
Trick to swap two numbers(a,b):
int temp;
temp = a;
a=b;
b=temp;
*/

void exchange (c1 & x , c2 & y){       // STUDY "REFERENCE VARIABLE" tut7iii.cpp    
    int temp;
    temp= x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.setData(10);
    oc1.display();

    oc2.setData(90);
    oc2.display();

    exchange(oc1 , oc2);

    cout<<"The value after exchanging becomes : "<<endl;
    oc1.display();
    oc2.display();

    return 0;
}