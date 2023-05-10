#include<iostream>
#include<string>
using namespace std;

//------------------------ USING TEMPLATES IN C++ -------------------------------

template<class T>    // Making template 'T'
class vector{
    public:
        T *arr;    // We have made an integer pointer
        int size;
    
        vector(int a){
            size = a;  
            arr = new T[size];
        }

        int dotProduct(vector v){      // 'a1.a2 + b1.b2 + c1.c2'  is the vector dot Product 
            T d = 0;
            for(int i=0;i<size;i++){
                //d = (this->arr[i] * v.arr[i]) + d;       // Here we can ignore this operator
                d += arr[i] * v.arr[i];     // The same is written above but here we have used '+=' and writing 'this' operator can be negleted
            }                               // '+=' will get the value of d and then add d to the next step 

            cout<<d<<endl;
        }
};


int main(){
    vector<int> v1(3);           // Here we are calculating dot Product of two floating type vectors 
    v1.arr[0]=4;                 // Using templates we can work with any data type with only making a single class to do multiple work.
    v1.arr[1]=3;
    v1.arr[2]=1;

    vector<int> v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    v1.dotProduct(v2);
    //float x = v1.dotProduct(v2);
    //cout<<x<<endl;
    
    vector<float> v3(3);          // Here we are calculating dot Product of two floating type vectors
    v3.arr[0]=4.55;               // Using templates we donot need to make a class specially for floating type vectors
    v3.arr[1]=3.3;
    v3.arr[2]=1;

    vector<float> v4(3);
    v4.arr[0]=1.5;
    v4.arr[1]=0;
    v4.arr[2]=1.5;

    v3.dotProduct(v4);

    return 0;
}