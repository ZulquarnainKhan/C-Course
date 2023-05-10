#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"You are eligible to enter"<<endl;
    }
    else if((age<=15)&&(age>0)){
        cout<<"You are not allowed to enter the party"<<endl;
    }
    else if((age>15)&&(age<18)){
        cout<<"You will need a kid pass to to enter"<<endl;
    }
    else{
        cout<<"Enter your valid age "<<endl;
    }


    return 0;
}





