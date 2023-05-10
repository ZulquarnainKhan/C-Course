#include<iostream>
using namespace std;

int main(){
    // What is a pointer?
    // pointer is a data type which holds the address of other data types

    int a=3;
    int *b=&a;
    // & ---->Address of operator
    // * ---->Dereference of operators

    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<*&a<<endl;

    // b is a pointer which stores the address of the integer a
    // we can store the value of a inside b by using int* b=&a
    // address of a is &a or b
    // data stored in the pointer can be accesed by using *b or *&a i.e  3

    int** c=&b;

    // We can store the address of a pointer inside another pointer by usin int** c=&b

    cout<<c<<endl;
    cout<<&b;

    return 0;
}