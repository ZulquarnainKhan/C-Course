#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:

        friend complex sumComplex(complex o1, complex o2);

        void setData(int a1,int b1){
            a=a1;
            b=b1;
        }

        void setData_By_Sum(complex o1,complex o2){
            a= o1.a + o2.a;
            b= o1.b + o2.b;
        }

        void printData(){
            cout<<"Your complex no is "<<a<<" +" <<b<<"i"<<endl<<endl;
            
        }
};


int main(){
    complex c1,c2,c3,sum;
    
    c1.setData(2,3);
    c1.printData();

    c2.setData(5,6);
    c2.printData();
   
    c3.setData_By_Sum(c1,c2);
    c3.printData();
    

    return 0;
}
