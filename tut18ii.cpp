#include<iostream>
using namespace std;

// Using 'recursion'S for fibonachi series
// Fibonachi series 1,1,2,3,5,8,13,21,34,55......
int fibo(int n){
    if (n<2){
        return 1;
    }
    else {
        return fibo(n-1) + fibo(n-2);
    }

}

int main(){
    int a;
    cout<<"Enter the position of fibonachi series : "<<endl;
    cin>>a;

    cout<<"The value at the position of fibonbachi series is : "<<fibo(a)<<endl;
    
    return 0;
};