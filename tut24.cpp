#include<iostream>
using namespace std;

//-----------------------------STATIC VARIABLE & STATIC FUNCTIONS ------------------------------------------------------------------

//static int count;       // static variable also known as class variable as it attaches itself to every object
                        // Means if one object uses count=0 as it starts (as usual) but when we switch to other object it retains its value
                        // The variable wont start with 0 but it will start from where it left
class Employee{
    int Id;
    //int count;      //static variables are initiated outside the class by using scope resolution operator
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the employee Id : "<<endl;
            cin>>Id;
            
        }

        void getdata(void){
            cout<<"The employee Id is : "<<Id<<endl<<"And the employee number is : "<<count+1<<endl;
            count++;
        }

        static void getCount(){                               // Static functions are declared inside the class
            cout<<"The value of count is : "<<count<<endl<<endl;    // static functions are used to access the static variables only
        }                                                     // Static member function throws an error when tried to access other non-static variables
};

//int Employee::count;        // Default value is always 0
int Employee::count=1000;   // If we want to start the counting from 1000 then we enter 'count=1000' ONLY HERE
                            // entering 'count=1000' anywhere else would give SYNTAX ERROR.

int main(){
    Employee zul,mady,ron;

    //zul.Id=2        // By default Id is a private integral function thus we cant write the value of Id in body
                    // It is to be done inside proper function, Here 'setdata' 'getdata' etc.
    zul.setdata();
    zul.getdata();
    Employee::getCount();       // The getCount() function can be accessed by both the ways
    zul.getCount();             

    mady.setdata();
    mady.getdata();
    Employee::getCount();

    ron.setdata();
    ron.getdata();
    Employee::getCount();

    return 0;
}