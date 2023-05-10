#include<iostream>
using namespace std;

//---------------------- MULTILEVEL INHERITANCE --------------------------
// (A -> B -> C)

class student{
    protected:
        int rollNo;
    public:
        void setRollNo(int);
        void getRollNo();
};

void student::setRollNo(int x){
    rollNo=x;
}

void student::getRollNo(){
    cout<<"The roll no is "<<rollNo<<endl;
}

class Exam : public student{      // class Exam is publically inherited from base class 'student'
    protected:
        double math_marks;
        double physics_marks;
    public:
        void setMarks(double , double);
        void getMarks();
};

void Exam :: setMarks(double x , double y){
    math_marks=x;
    physics_marks=y;
}

void Exam :: getMarks(){
    cout<<"Marks obtained in maths out of 100 exam are "<<math_marks<<endl;
    cout<<"Marks obtained in physics out of 100 exam are "<<physics_marks<<endl;
}

class Result : public Exam{      // class Result is publically inherited from already derived class 'Exam'
    float percentage;
    public:
        void display();
};

void Result::display(){
    getRollNo();
    getMarks();
    cout<<rollNo<<endl;
    float per=(math_marks+physics_marks)/2;
    percentage=per;
    cout<<"The respective percentage of the student having rollno "<<rollNo<<" is "<<percentage;
}


int main(){
    /*
    NOTES:
        If we are inheriting B from A and C from B : [A -> B -> C]
        1. A is the base class of B and B is the base class of C.
        2. A->B->C is called the inheritance path
    */
   
    Result zulquar;
    zulquar.setRollNo(21);  // if we write student s1 and then s1.setRollNo(10); then its given to base class and doesnot effect derived classes
    zulquar.setMarks(93.6,89.8);
    zulquar.display();
 
    return 0;
}