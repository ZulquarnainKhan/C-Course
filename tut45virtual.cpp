#include<iostream>
using namespace std;

/* ------------------------ VIRTUAL BASE CLASS -----------------------------
   when we inherit in the following way (A -> B & C -> D) then,
   if we have a variable in class A , if we inherit B & C from then they will also get the variable each
   And then if we inherit D from both B and C then the same variable get inherited which creates a ambiguity 
   To solve this ambiguity we use 'Virtual Base Class' 
*/
// -------> Here we are doing (Student -> Test & Sport -> Result)
class Student{
    protected:
        int roll_no;
    public:
        void setNo(int a){
            roll_no=a;
        }
        void print_Roll(){
            cout<<"Your Roll Number is "<<roll_no<<endl;
        }
};

class Test : public virtual Student{          // Here we are setting class Student as Virtual base class
    protected:
        double maths,physics;
    public:
        void setMarks(double x,double y){
            maths=x;
            physics=y;
        }
        void print_Marks(){
            cout<<"The marks obtained in maths ot of 80 is: "<<maths<<endl;
            cout<<"The marks obtained in physics out of 70 is: "<<physics<<endl;
        }

};

class Sports : public virtual Student{        // Here we are setting class Student as Virtual base class
    protected:
        double score;
    public:
        void setScore(double x){
            score=x;
        }
        void print_Score(){
            cout<<"The score obtained in PT is: "<<score<<endl;
        }
};

class Result : public Test , public Sports{
    private:
        float total;
    public:
        void display(){
            total=score+maths+physics;
            print_Roll();       // If we donot write Student as virtual base 
                                // then the compilate will give an error as print_Roll() as ambiguous it is inherited twice from sports and Test classes
            print_Marks();
            print_Score();
            cout<<"The total marks scored in academics is "<<total<<endl;
            
        }
};

int main(){
    Result zulquar;
    zulquar.setNo(49);
    zulquar.setMarks(65.5,63);
    zulquar.setScore(95);

    zulquar.display();
    
    
    return 0;
}