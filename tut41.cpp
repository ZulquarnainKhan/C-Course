#include<iostream>
using namespace std;

/*------------------------ MULTIPLE INHERITANCE ------------------------------
(A & B & C -> D)

SYNTAX FOR INHERITING IN MULTIPLE INHERITANCE : 
class Derived : visibility-mode Base1 , visibility-mode Base2 , visibility-mode Base3{

};
*/

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;
        }

};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int=a;
        }
        
};

class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int=a;
        }
        
};


class Derived : public Base1 , public Base2 , public Base3{
    public:
        void display(){
            cout<<"The value of variable of Base1 is "<<base1int<<", of Base2 is "<<base2int<<" and of Base3 is "<<base3int<<endl;
            cout<<"The sum of all these variable is "<<(base1int+base2int+base3int)<<endl;
        }

};

// In Derived class base1int, base2int and base3int remains prohibited as they are inherited in public visuality-mode
// In Derived class set_base1int, set_base2int and set_base3int remains public as they are inherited in public visuality-mode


int main(){
    Derived d1;
    d1.set_base1int(11);
    d1.set_base2int(21);
    d1.set_base3int(31);

    d1.display();
    
    return 0;
}