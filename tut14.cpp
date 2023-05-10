#include<iostream>
using namespace std;

 // We use arrays to merge data having same datatype  ex: int, float, char etc.
 // We use structure to merge data having different data types
struct employee{
    int emID;
    char emFL;
    float salary;
};

// In union we can use only one of the given datatype at a given time
// Using union we can do memory management
union money{
    int rice;      //let it takes 4 bytes
    char token;    //1 bytes
    float rupee;   //4 bytes              // In structure we use a total of 9 bytes 
    };                                    // But in union we can use either 4/1/4 any one of them

int main(){

//-----------------------------------Using structure -->'struct'-----------------------------------------------------
    struct employee zul;
    // Here we are structure emloyee having 'zul' 
    struct employee rohan;
    struct employee subham;                                            
    
    
    
    zul.emID=1;                      // Having 'zul' employee data stored under three different datatypes.
    zul.emFL='z';
    zul.salary=150;

    cout<<endl;
    cout<<"The employee ID of zul is : "<<zul.emID<<endl;
    cout<<"The first letter  of zul is : "<<zul.emFL<<endl;
    cout<<"The salary of zul is : "<<zul.salary<<endl<<endl;

    subham.emID=3;
    subham.emFL='s';
    subham.salary=100;

    cout<<"The employee ID of subham is : "<<subham.emID<<endl;
    cout<<"The first letter  of subham is : "<<subham.emFL<<endl;
    cout<<"The salary of subham is : "<<subham.salary<<endl<<endl;


//---------------------------------------- Using union---------------------------------------------------------
    union money chips;

    chips.rice=100;           // If we write another datatype here 'token' after 'rice'
    chips.token='s';          // Then the value of rice is over written 
    //chips.rupee=5;          // If we print the value of rice then we will get a wrong value
                              // But if we print tocken then we will get tht correct token here 's'
                              // In union the last data type which is written is prefered over the previous one 
    
    cout<<"Using union"<<endl<<chips.rice<<endl;
    cout<<"Using union"<<endl<<chips.token<<endl<<endl;


//--------------------------------------------Using enum--------------------------------------------------------

    enum meal{breakfast,lunch,dinner};                // Enum is used to give integer no to the 
                                                      // The no starts from 0,1,2,3,... and moves to right
    meal m1=breakfast;       // Here we have assigned the m1 as breakfast thus m1 and breakfast share the same number 

    cout<<"True-->1 false-->0 : "<<(m1==0)<<endl;
    cout<<"True-->1 false-->0 : "<<(m1==1)<<endl<<endl;

    cout<<"No. associating breakfast is : "<<breakfast<<endl;
    cout<<"No. associating m1 meal is : "<<m1<<endl;
    cout<<"No. associating lunch is : "<<lunch<<endl;
    cout<<"No. associating dinner is : "<<dinner<<endl<<endl;




    
    


   
    
    return 0;
};