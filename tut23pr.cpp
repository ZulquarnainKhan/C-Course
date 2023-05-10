#include<iostream>
using namespace std;


class shop{
    int itemID[10];
    int itemPrice[10];
    int counter;

    public:
        int initcounter(){
            counter=0;
        }

        void setPrice();
        void getPrice();

       
};

void shop::setPrice(){
    int n;
    cout<<"Enter the number of items :"<<endl;
    cin>>n;

    

    for(int i=0;i<n;i++){
        cout<<"Enter ID of your item "<<i+1<<endl;
        cin>>itemID[i];
        cout<<"Enter the price of item "<<i+1<<endl;
        cin>>itemPrice[i];
    }
}

void shop::getPrice(){
    int n;
    cout<<endl<<"Enter the number of items :"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"The Item ID and price is "<<itemID[i]<<" and "<<itemPrice[i]<<endl;
    }
}


int main(){
    

    shop wholeSale;
    wholeSale.setPrice();
    wholeSale.getPrice();

    return 0;
}