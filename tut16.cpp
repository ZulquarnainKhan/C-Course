#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
};

// This will not swap a and b
void swap(int c,int d){    //temp a b      
    int temp =c;           //  4  4 5
    c=d;                   //  4  5 5
    d=temp;                //  4  5 4
};

//-------------------Call by reference using pointers----------------------------
// This will swap a and b
void swap_pointer(int* c,int* d){        // We are taking address of a and b as c and d
                     //temp a b          // c=&a and d=&b
    int temp =*c;    //  4  4 5          // temp has value of c stored
    *c=*d;           //  4  5 5          // c has value of d stored
    *d=temp;         //  4  5 4          // d has value of temp stored
};

int main(){
    int a=4, b=5;
    //cout<<"The sum of 4 and 5 is : "<<sum(4,5)<<endl;

    cout<<"The value of a is : "<<a<<" The value of b is : "<<b<<endl;
    //swap(a,b);  // This will not swap a and b

    swap_pointer(&a,&b);       // This will swap a and b
                               // It is asking address of a and b 
    cout<<"The value of a is : "<<a <<" The value of b is : "<<b<<endl;
    
    return 0;
};