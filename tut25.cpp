#include<iostream>
#include<string>
using namespace std;

class Employee{
    int id;
    int salary;
    string name;
    public:
        void setID(){
            salary=121;
            cout<<"Enter ID of emoloyee "<<endl;
            cin>>id;
            cout<<"enter name of employee "<<endl;
            cin>>name;
        }

        void getID(){
            cout<<"The ID of this employee is "<<id<<endl;
            cout<<"The name of this employee is "<<name<<endl;
            cout<<"The salary of this employee is "<<salary<<endl<<endl;
            
        } 
};

int main(){

    //Employee Zul,Harry,Rohan;    -----> Here we have indivisually put datas in given employees
    //Zul.setID();                 -----> If the no of employee in a company are very large then we can't do it this way
    //Zul.getID();
    //Harry.setID();
    //Harry.getID();
    //Rohan.setID();
    //Rohan.getID();


    Employee FB[4];           // If no of employees in a company are very large then we can write it this way
                              // Here FB is a company with 4 employees
    for(int i=0;i<4;i++){
        FB[i].setID();        // If the number of employees are very large then we can run it in a for loop
        FB[i].getID();
     
    }
   
    
    return 0;
}