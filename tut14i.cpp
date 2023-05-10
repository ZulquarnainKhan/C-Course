#include<iostream>
using namespace std;

typedef struct employee{        // Instead opf writing struct employee zul;
                                // We can write ep zul;
                                // If we write 'typedefine struct employee'=
    int emID;
    char emFL;
    float salary;
}ep;

int main(){
    ep zul;

    zul.emID=1;                      // Having 'zul' employee data stored under three different datatypes.
    zul.emFL='z';
    zul.salary=150;


    cout<<endl;
    cout<<"The employee ID of zul is : "<<zul.emID<<endl;
    cout<<"The first letter  of zul is : "<<zul.emFL<<endl;
    cout<<"The salary of zul is : "<<zul.salary<<endl<<endl;

    return 0;
}