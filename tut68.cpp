#include<iostream>
using namespace std;

//--------------------- Member Function & Overloading Template Function ----------------------

template< class T >
class Harry{
    public:
        T data;
        Harry(T a){
            data=a;
        }
        void display();   
};

template<class T>              // This is how we can write a function outside a class using scope resolution with templates
void Harry<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first function having "<<a<<endl;
}

// Overloading template function as exact function and templatised function have the same name

template<class T1>       // If integer is called then this will not invoke as exact match of func(int) is there
void func(T1 a){
    cout<<"I am templatised function having "<<a<<endl;
}


int main(){

    Harry<int> h1(5);
    h1.display();

    Harry<string> h2("Hellow World ");
    h2.display();

    func(5.5);
    func(5);      // If will call the func() with an integer then exact match will have highest priority i.e. 'func(int)'


    return 0;
}