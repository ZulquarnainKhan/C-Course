#include<iostream>
using namespace std;

class student{
    private:
        string religion;
        int ph_no;
    public:
        int roll_no;
        float percentile;
        string category;
        void setdata(string rel,int ph);
        void getdata(){
            cout<<"students religion : "<<religion<<endl;
            cout<<"students ph_no : "<<ph_no<<endl;
            cout<<"students roll_no : "<<roll_no<<endl;
            cout<<"students percentile : "<<percentile<<endl;
            cout<<"students category : "<<category<<endl;
        }
            
};

void student :: setdata(string rel,int ph){
    religion=rel;
    ph_no=ph;
}

int main(){

    student zul;
    zul.roll_no=49;
    zul.percentile=96.44;
    zul.category="General";
    zul.setdata("Islam",9);
    zul.getdata();
    
    return 0;
}