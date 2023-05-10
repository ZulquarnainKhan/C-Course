// Q--> Create a function that takes two points and computes the distance between those points.

#include<iostream>
#include<cmath>        // As we have done square root as "sqrt()"
using namespace std;

class Point{
    int a,b;
    static int count;      // Static variable are initiated outside the class using scope resolution operator
                           // We are using static variable as it retains its values even in other objects
    public:
        Point(void );    // We cannot write inside constructor asking output and input (As per my experience)
        

        void printPoint(void){
            cout<<"The given point is ("<<a<<","<<b<<")"<<endl;
        }

        friend float pDistance(Point ,Point);
};

int Point::count=1;       // static variable initiated

Point :: Point(void){
    int x,y;
    cout<<"Enter the X cordinates of point "<<count<<endl;
    cin>>x;
    a=x;

    cout<<"Enter the Y cordinates of point "<<count<<endl;
    cin>>y;
    b=y;

    count++;
}

float pDistance(Point o1 ,Point o2){       // Using lecture tut26.cpp
    int A=(o1.a-o2.a)*(o1.a-o2.a);
    int B=(o1.b-o2.b)*(o1.b-o2.b);

    float C=A+B;
    float D=sqrt(C);

    cout<<"The given distance between Points is "<<D;


}

int main(){
    Point p1;
    p1.printPoint();

    Point p2;
    p2.printPoint();

    pDistance(p1 ,p2);
    

    return 0;
}