#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    switch (age){

    
        case 18:
        cout<<"You are in matric"<<endl;
        break;

        case 21:
        cout<<"Your are in college "<<endl;
        break;


        default:
        cout<<"No special cases "<<endl;
        break;
    }



    return 0;
}