#include<iostream>
using namespace std;

//---------------------------USING FRIEND FUNCTION-----------------------------------
class complex{         
    int a;               // A friend function can access the private data of a class 
    int b;               // Friend func are declared outside the class
    public:              // They can access private data if we mention friend inside the class 

        friend complex sumComplex(complex o1, complex o2);      // Here we have mentioned a complex function named 'sumComplex' as friend
                                                                // If we dont mention the friend inside the class then it will throw an error
        void setData(int a1,int b1){
            a=a1;
            b=b1;
        }

        void setData_By_Sum(complex o1,complex o2){
            a= o1.a + o2.a;
            b= o1.b + o2.b;
        }

        void printData(){
            cout<<"Your complex no is "<<a<<" +" <<b<<"i"<<endl<<endl;
            
        }
};

complex sumComplex(complex o1,complex o2){         // PROPERTIES OF FRIEND FUNCTION :-
    complex o3;                                    // 1. Not in the scope of class
    o3.setData((o1.a+o2.a) , (o1.b+o2.b));         // 2. It can't be called from the object of the class. Ex: c1.sumComplex()---->ERROR
    return o3;                                     // 3. Can be invoked without the help of any object
}                                                  // 4. Usually contains the object as argument
                                                   // 5. Can be declared inside public or private section of class. By using 'friend'
int main(){                                        // 6. It cannot access the members directly by their names need 'object_name.member_name' 
                                                   //    to access any member 
                        
                                                   
    c1.setData(2,3);                               
    c1.printData();                                
                                                   
    c2.setData(5,6);                               
    c2.printData();
   
    //c3.setData_By_Sum(c1,c2);
    //c3.printData();
    sum=sumComplex(c1,c2);
    sum.printData();
    


    return 0;
}
