#include<iostream>

using namespace std;
int main(){

    //reference variables
    //rohan das --> rohan --> ron (one person is called by different names)

    float x=454;
    float &y=x;
    //Here we are refering both x and y to the same value i.e. 454
    cout<<x<<endl;
    cout<<y<<endl;



    return 0;
}