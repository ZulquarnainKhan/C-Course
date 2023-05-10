#include<iostream>
using namespace std;

// ------------- CLASS TEMPLATES WITH DEFAULT PARAMETERS --------------------

template<class T1=int ,class T2=float , class T3=string >
class Zulquar{
    T1 a;
    T2 b;
    T3 c;
    public:
        Zulquar(T1 x , T2 y , T3 z){
            a=x;
            b=y;
            c=z;
        }

        void display(void){
            cout<<"The term a is "<<a<<endl;
            cout<<"The term b is "<<b<<endl;
            cout<<"The term c is "<<c<<endl<<endl;
        }


};

int main(){
    Zulquar<> Z1(10,11,"Player");    // Here we have default parameters for templates as <int,float>
    Z1.display();

    Zulquar<int,string> Z2(10,"Lionel","Messi");  // We have to always mention the 1st parameter before writing a different 2nd one
    Z2.display();

    Zulquar<char> Z3('c',0.7,"CR7");   // We can only mention the 1st parameter then leave the 2nd one it will become default parameter
    Z3.display(); 
    
    return 0;
}