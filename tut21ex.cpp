#include<iostream>
using namespace std;

class animal{
    private:
        string gender;
    public:
        string name;
        int age;

    void setData(string gen);

    void getData(){
        cout<<"The name of the animal is : "<<name<<endl;
        cout<<"The age of the animal is : "<<age<<endl;
        cout<<"The gender of the animal is : "<<gender<<endl;
    }      
};

void animal::setData(string gen){
    gender=gen;
}

int main(){
    animal Lion;
    Lion.setData("male");
    Lion.name="Leon";
    Lion.age=5;

    Lion.getData();
    return 0;
}

