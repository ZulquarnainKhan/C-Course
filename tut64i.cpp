#include<iostream>
using namespace std;

class vector{
    public:
        int *arr;    // We have made an integer pointer
        int size;
    
        vector(int a){
            size = a;
            arr = new int[size];
        }

        friend int dotProduct(vector v1, vector v2);      // 'a1.a2 + b1.b2 + c1.c2'  is the vector dot Product 
         
};

int dotProduct(vector v1 ,vector v2){      // 'a1.a2 + b1.b2 + c1.c2'  is the vector dot Product 
            int d = 0;
            //int size=3;
            for(int i=0; i<size ;i++){
                //d = (this->arr[i] * v.arr[i]) + d;       // Here we can ignore this operator
                d += v1.arr[i] * v2.arr[i];     // The same is written above but here we have used '+=' and writing 'this' operator can be negleted
            }                               // '+=' will get the value of d and then add d to the next step 

            return d;
        }


int main(){
    vector vec1(3);
    vec1.arr[0]=4;
    vec1.arr[1]=3;
    vec1.arr[2]=1;

    vector vec2(3);
    vec2.arr[0]=1;
    vec2.arr[1]=0;
    vec2.arr[2]=1;

    int x = dotProduct(vec1,vec2);
    cout<<x<<endl;
    
    return 0;
}