#include<iostream>
using namespace std;

//------------------------- THIS POINTER -------------------------------

class A{
    int a;
    public:
        void setData(int a){
            //a = a;              // Writing  like this will give a garbage value to 'a'   
            this->a = a;          // 'This pointer' is called implicitely and it will set the correct value of argument 'a'

        }

        void getData(){
            cout<<"Value of A is "<<a<<endl;
        }
};

int main(){
    A a1;
    a1.setData(4);
    a1.getData();
    return 0;
}