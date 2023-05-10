#include<iostream>
using namespace std;
//----------------------- COPY CONSTRUCTOR -------------------------------------------
// When no copy constructor is found then the compiler supplies its own copy constructor
// Thus we donot need to write a copy constructor
// Not writing a copy constructor and asking for copying data of another class will not give an error because of the compiler

class Number{
    private:
        int a;
        static int count;
    public:
        Number(int x);

        Number(Number & n){    // Copy constructor this is the right way to write it 'Number(Number n)' will give error
            cout<<"Copy constructor called "<<endl;    // the above we usually write in friend functions or functions usually
            a=n.a;
        }

        Number(){
            int x=0;
            a=x;
        }
        
        void printData(void){
            cout<<a<<endl;
        }
};

int Number::count=1;

Number::Number(int x){
    cout<<"number "<<count<<endl;
    a=x;
    count++;
}

int main(){
    Number n1(3);
    n1.printData();
    Number n2(2);
    n2.printData();
    Number n3(1);
    n3.printData();
    Number n4;
    n4.printData();
    Number n5(n1);      // Constructor of n5 object is copying data of object n1
    n5.printData();


    
    return 0;
}