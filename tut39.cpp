#include<iostream>
using namespace std;

//--------------------- PROTECTED ACCESS IN C++ -------------------------

class Base{
    private:      // private data cannot be inherited by derived class
        int b;
    protected:    // 'protected data' is like private (not private) but it can be inherited by derived class
        int a;

};

/*  VISIBILITY MODE:       Public Mode:       Private Mode:       Protected Mode:
    1. Private members     not inherited      not inherited       not inherited 
    2. Protected members   protected          private             protected
    3. Public members      public             private             protected
*/

class Derived1 : protected Base{

};


int main(){
    Base x;
    Derived1 d1;
    
    cout<<d1.a;       // This will give an error as 'a' is a protected memeber in Base class    
                      // and we have inherited it using protected visibility thus 'a' is also protected in Derived class
                      // We cannot access protected members like public members, it require defined functions or constructors 

    return 0;
}                     // [ERROR]