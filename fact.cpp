#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a no : "<<endl;
    cin>>x;
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    cout<<"The factorial is "<<fact;
    return 0;
}