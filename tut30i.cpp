#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }

        displayPoint(void){
            cout<<"The given point on cartesian plane is ("<<x<<","<<y<<")"<<endl;
        }
    

};

int main(){
    Point p1(2,3);
    p1.displayPoint();

    Point p2(4,6);
    p2.displayPoint();
    
    return 0;
}