#include<iostream>
using namespace std;

//----------------------- FUNCTION USING TEMPLATES ----------------------------------

/* TRADITIONAL METHORD
float funcAvg1(int a, int b){
    float c;
    c=(a+b)/2.0;    // Here if we write (a+b)/2 then it will only return a integer 
    return c;       // As (adding/subtracting/multiplying/dividing) two integer is a integer thus we have to make denominator a float i.e. '2.0'
}

float funcAvg2(int a, float b){
    float c;
    c=(a+b)/2;    // Here if we write (a+b)/2 then it will a float as 'b' is a float as 'integer+float = float'
    return c;      
}
*/

template<class T1,class T2>  // Calculating average using templates
float funcAvg(T1 a, T2 b){
    float c;
    c=(a+b)/2.0;
    return c;
}


int main(){
    /*
    float x,y;
    x = funcAvg1(10,11);
    cout<<"The average of these numbers is ";
    cout<<x<<endl;

    y = funcAvg2(1,2.5);
    cout<<"The average of these numbers is ";
    cout<<y<<endl;
    */

    float x,y,z;
    x = funcAvg(5,2.2);
    cout<<x<<endl;
    y = funcAvg(1.5,5);
    cout<<y<<endl;
    z = funcAvg(3.5,2.5);
    cout<<z<<endl;
    return 0;
}