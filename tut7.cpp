#include<iostream>

using namespace std;

int c=45;

int main1(){
    int a,b,c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The value of c is :"<<c<<endl;
    cout<<"The value of global c is :"<<::c<<endl<<endl;
    return 0;
}

int main2(){
    float d=34.4f;
    long double e=34.4l;
    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;
}


int main3(){
 //reference variables
    //rohan das --> rohan --> ron (one person is called by different names)

    float x=454;
    float &y=x;
    //Here we are refering both x and y to the same value i.e. 454
    cout<<x<<endl;
    cout<<y<<endl;
}


int main4(){
    int p=45;
    double q=4.5;
    cout<<"The value of p is : "<<p<<endl;
    cout<<"The value of p is : "<<double(p)<<endl;

    cout<<"The value of q is : "<<q<<endl;
    cout<<"The value of q is : "<<int(q)<<endl;

    cout<<"The value of expression is :"<<p+q<<endl;
    cout<<"The value of expression is :"<<p+int(q)<<endl;
    cout<<"The value of expression is :"<<double(p)+q<<endl;


    cout<<"The size of integer p is : "<<sizeof(p)<<endl;
    cout<<"The size of double p is : "<<sizeof(double(p))<<endl;


}