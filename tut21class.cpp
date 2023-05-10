#include <iostream>
using namespace std;

// OOPs = Classes and objects 
    // C++ ----> intially called C with classes by streoustroup 
    // Class ---> extension of structures (in C)
    // structures has limitations :
    //    -> members are all public
    //    -> No methords
    // Classes = structures + more
    // Classes can have methords and properties
    // Classes can make few members as private and few as public  (as done in tut21)
    // Struction in C++ are typedefed 

class employee{
    private:         // We can not acess private data from anywhere and we use to set and print data using functions only.
        int a,b,c;
    public:          // We can access public data from anywhere and change there values without using a proper function.
        int d,e;
    
        void setdata(int a1,int b1,int c1);   // Declaration of private variables is done this way

        void getdata(){
            cout<<"Value of a is : "<<a<<endl;
            cout<<"Value of b is : "<<b<<endl;
            cout<<"Value of c is : "<<c<<endl;
            cout<<"Value of d is : "<<d<<endl;
            cout<<"Value of e is : "<<e<<endl;
        }
    
};

void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;                    // Here we should not write int 'a=a1;' as it will give a garbage value ,
    c=c1;                    // We write it as just 'a=a1;' .
};

int main(){
    employee zul;
    zul.setdata(1,2,3);
    zul.d=11;
    //zul.a=1;     // 'a' is a private data thus can't be acessed from anywhere without a function
    zul.e=21;
    zul.getdata();




    return 0;
}