#include<iostream>
using namespace std;
/*
Case1:
class B : public A{
    // Order of execution of constructors --> first A() then B()      (as Base class constructor is exuted earlier than Derived class)
}

Case2:
class C : public A , public B{
    // Order of execution of constructors --> first A() then B() then C()     (as Base class A was earlier than base class B)
}

Case3:
class C : public A , public virtual B{
    // Order of execution of constructors --> first B() then A() then C()     (as Virtual Base class B always executed first as its 'virtual')
}
*/

class Base1{
    protected:
        int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class constructor is called "<<endl;
        }
        void printData1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    protected:
        int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class constructor is called "<<endl;
        }
        void printData2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }

};

/*  SYNTAX:
    Derived-constructor(a1',a2',b1',b2',b3',c1',c2') : Base1(a1,a2) , Base2(b1,b2,b3){
        <body>
    }
*/

class Derived : public Base2 , public Base1 {         // First Base2 constructor then Base1 after that Derived constructor is called
    int derived1 , derived2;
    public:
        Derived(int a,int b, int c, int d) : Base1(a) ,Base2(b) {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor is called "<<endl;
        }
        void printDerivedData(){
            cout<<"The value of derived1 and derived2 is "<<derived1<<" and "<<derived2;
        }
};


int main(){

    Derived d1(20,11,0,3);
    d1.printData1();
    d1.printData2();
    d1.printDerivedData();
    
    return 0;
}