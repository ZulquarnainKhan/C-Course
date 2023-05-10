#include <iostream>
using namespace std;


// Factorial of a number :
// 6! = 6*5*4*3*2*1 = 720
// 0! = 1 and 1! = 1
// 6! = 6*5!
// n! = n*(n-1)!

int factorial(int n){
    if (n<=1){              // Using 'recursion' for finding facotial
        return 1;                     // recursion means calling the function inside the function again and again
    }
    else {
    return n*factorial(n-1);
    }


}

int main(){
    int i;
    cout<<"Enter a number : "<<endl;
    cin>>i;

    cout<<"The factorisl of entered no is : "<<factorial(i);




    return 0;
}