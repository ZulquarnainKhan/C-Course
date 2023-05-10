#include<iostream>
#include<string>
using namespace std;

//----------------- TEMPLATES WITH MULTIPLE PARAMETERS ----------------------
/*
template<class T1, class T2 , class T3 .........>
class name_of_class{
    // Body
};
*/

template<class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;

        myclass(T1 a,T2 b){
            data1=a;
            data2=b;
        }

        void display(void){
            cout<<data1<<" "<<data2<<endl;
        }
};


int main(){
    myclass<int , char>  obj1(10,'M');   // characters are written inside '' single apostrophes
    obj1.display();

    myclass<int , float>  obj2(10, 77.85);
    obj2.display();

    myclass<string , string>  obj3("Hellow", "World");   // Strings are written inside "" double apostrophes
    obj3.display();
    
    return 0;
}