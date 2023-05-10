#include<iostream>
using namespace std;

int main(){
    // Array examples:

    int marks[4]={33,40,13,37};
    // Here marks is an 'array' which store 4 integral datas
    // We use arrays to merge data having same datatype  ex: int, float, char etc.
    // Thus written 'int marks[4]={33,40,13,37}'.
    // The memory location always start from 0,1,2,3.... from left
    // We cant make -1,-2,-3.. from right side in c++ language.
    
    cout<<"The average marks of students are :"<<endl;
    cout<<marks[0]<<endl;    
    cout<<marks[1]<<endl;    
    cout<<marks[2]<<endl;    
    cout<<marks[3]<<endl<<endl; 
    //cout<<marks[-1]<<endl; 
    //cout<<marks[-4]<<endl;       NOT POSSIBLE 

    int math_marks[4];
    // We can manually enter the value of each contiguos memory locations

    math_marks[0]=10;
    math_marks[1]=20;
    math_marks[2]=30;
    math_marks[3]=40;

    cout<<"The math marks for the students are:"<<endl;
    cout<<math_marks[0]<<endl;    
    cout<<math_marks[1]<<endl;    
    cout<<math_marks[2]<<endl;    
    cout<<math_marks[3]<<endl<<endl;

    // We can also alter the values inserted in an array

    marks[1]=30;
    cout<<"The revised value of the marks of 2nd std : "<<endl<<marks[1]<<endl<<endl;

    // Printing using for loop
    /*int i;
    for(int i=0;i<=3;i++){
        cout<<"The marks of std "<<i+1<<" is : "<<marks[i]<<endl;
    }*/


    // Using while loop
    /*int i=0;
    while(i<=3){
        cout<<"The marks of std "<<i+1<<" is : "<<marks[i]<<endl;
        i=i+1;
    }*/


    // Using do-while loop
    int i=0;
    do{
        cout<<"The marks of std "<<i+1<<" is : "<<marks[i]<<endl;
        i++;
    }
    while(i<=3);

    cout<<endl<<endl;


    // Pointers and arrays :
    int*p=marks;
    // We are adding a pointer 'p' in the array ----> 'mark[4]'
    // *p will start from mark[0] 
    // If we write 'int* p=marks[];'    Then it will give an error.

    cout<<"The value of marks[0] or *p is      "<<*p<<endl;
    cout<<"The value of marks[1] or *(p+1) is  "<<*(p+1)<<endl;     // Here we are writing *(p+1) instead of *p+1
    cout<<"The value of marks[2] or *(p+2) is  "<<*(p+2)<<endl;     // As in *p+1 we will get 'marks[0]+1' instead of marks[1]
    cout<<"The value of marks[3} or *(p+3) is  "<<*(p+3)<<endl<<endl;


    
    
    
    return 0;
}