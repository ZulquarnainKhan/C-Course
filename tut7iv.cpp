#include <iostream>
using namespace std;


//type casting
//changing form of variable from one form to another is called 'type casting'
//changing variable p from integer to double form by writing 'double(p)'

int main(){
    int p=45;
    double q=4.5;
    cout<<"The value of p is : "<<p<<endl;
    cout<<"The value of p is : "<<double(p)<<endl;

    cout<<"The value of q is : "<<q<<endl;
    cout<<"The value of q is : "<<int(q)<<endl;

    cout<<"The value of expression is :"<<p+q<<endl;
    cout<<"The value of expression is :"<<p+int(q)<<endl;
    cout<<"The value of expression is :"<<double(p)+q<<endl;


    cout<<"The size of integer p is : "<<sizeof(p)<<endl;
    cout<<"The size of double p is : "<<sizeof(double(p))<<endl;




    return 0;
}