#include<iostream>
using namespace std;
class Bank{
    int principle , years;
    float interestRate;
    float returnValue;
    public:
        Bank();    // We make a default constructor incase we make shome object and we forget to put valuesnytpes then the whole program will not show error
        Bank(int p,int y ,int r);   // Here 'r' is a integer , the value we enter is in percentage now i.e. 4%
        Bank(int p,int y ,double r); // Here 'r' is a fraction i.e. 0.04
        void printData(){
            cout<<"Your invested money is "<<returnValue<<endl;
        }
};

Bank :: Bank(int p, int y, double r){
    cout<<"Your interst rate is a fraction ."<<endl;
    cout<<"Enter the principle amount : "<<endl;
    cin>>p;
    cout<<"Enter the no of years : "<<endl;
    cin>>y; 
    cout<<"Enter the fractional interest rate : "<<endl;
    cin>>r;


    principle=p;
    years=y;
    interestRate=r;
    returnValue=principle;
    //cout<<"Interest rate is "<<interestRate<<endl;

    for (int i=0;i<y;i++){
        returnValue=returnValue + (returnValue*interestRate);
    };

    
}

Bank :: Bank(int p, int y, int r){

    cout<<"Your interst rate is an integer ."<<endl;
    cout<<"Enter the principle amount : "<<endl;
    cin>>p;
    cout<<"Enter the no of years : "<<endl;
    cin>>y;
    cout<<"Enter the integral interest rate : "<<endl;
    cin>>r;

    principle=p;
    years=y;
    interestRate=float(r)/100;         // It is written in this manner 
                                       // if we write r/100 then as r is integer it will give interesrRate as '0'
    returnValue=principle;

    for (int i=0;i<y;i++){
        returnValue=returnValue + (returnValue*interestRate);
    };

}

Bank::Bank(){}

int main(){
    int p,y,r;
    double R;
    int choice;

    cout<<"If user have fractional rate then type '1' else type '2' for integral rate : "<<endl;
    cin>>choice;
    if (choice==1){
        Bank m1(p,y,R);
        m1.printData();
    }

    else{
        Bank m2(p,y,r);
        m2.printData();
    }
    
    return 0;
}
