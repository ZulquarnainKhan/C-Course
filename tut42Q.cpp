/* Create 2 classes:
    1. simpleCalculator - takes input of two nos using utility function and performs (+ , - , * , /)
        and displays the result using another function
    2. scientificCalculator - takes input of 1 number and perform any 4 scientific operation and displays the result
        using another function

    Create another HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using? ---->(Ans) We are using multiple in heritance  
    Q2. What mode of inheritance are you using? ---->(Ans) We are using public visibility-mode of inheriutance in both
*/

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        float a,b;
    public:
        void getData1(void){
            float x,y;
            cout<<"Enter first number for simple calculator :"<<endl;
            cin>>x;
            cout<<"Enter second number for simple calculator :"<<endl;
            cin>>y;
            a=x;
            b=y;
        }    

         void display1(){
            double div=(a/b);
            cout<<"Displaying simple calculator functions "<<endl;
            cout<<"The addition of these two nos is "<<(a+b)<<endl;
            cout<<"The subtraction of these two nos is "<<(a-b)<<endl;
            cout<<"The multiplication of these two nos is "<<(a*b)<<endl;
            cout<<"The division of these two nos is "<<div<<endl<<endl;
        }
 
};

class ScientificCalculator{
    protected:
        double s;
    public:
        void getData2(){
            double x;
            cout<<"Enter a number for scientific calculations : "<<endl;
            cin>>x;
            s=x;
        }
        
        void display2(){
            //double t=(1/57.296)*s;      // if we want to convert radian to degrees
            cout<<"Displaying scientific calculator functions "<<endl;
            cout<<"The sin of this number(taken as radian) is "<<sin(s)<<endl;
            cout<<"The cos of this number is "<<cos(s)<<endl;
            cout<<"The tan of this number is "<<tan(s)<<endl;
            cout<<"The log(base e) of this number is "<<log(s)<<endl;
        }
     
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator {
    
// We have inherited all the data from both Base classes 
       
};


int main(){
    /*SimpleCalculator s1;
    s1.getData();
    s1.display1();
    */

    /*ScientificCalculator sc1;
    sc1.getData2();
    sc1.display2();
    */

   HybridCalculator h1;
   h1.getData1();
   h1.display1();

   h1.getData2();
   h1.display2();

    
    return 0;
}