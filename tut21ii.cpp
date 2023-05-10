#include<iostream>
using namespace std;

class species{
    private:
        string blood_gp;
        string gender;
    public:
        int lifetime;
        string name;
        int legs;
        float weight;
        void setdata(string gp,string gen);
        void getdata(){
            cout<<"Species name is : "<<name<<endl;
            cout<<"Species lifetime is : "<<lifetime<<endl;
            cout<<"Species blood gp is : "<<blood_gp<<endl;
            cout<<"Species gender is : "<<gender<<endl;
            cout<<"Species weight is : "<<weight<<endl;
            cout<<"Species legs is : "<<legs<<endl;

        } ;   

};

void species::setdata(string gp,string gen){
    blood_gp=gp;
    gender=gen;
};

int main(){
    species homosapien;
    homosapien.name="Homo sapiens";
    homosapien.lifetime=60;
    homosapien.weight=58.5;
    homosapien.legs=2;
    homosapien.setdata("AB+","male");
    homosapien.getdata();
    







    return 0;
};