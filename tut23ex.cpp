#include<iostream>
using namespace std;

class Shop{
    int count;
    int itemPrice[10];
    int itemId[10];

    public:
        void initcount(){
            count=0;
        }

        void setPrice(){
            cout<<"Enter the ID of item "<<count + 1<<endl;
            cin>>itemId[count];
            cout<<"Enter the Price of item "<<count + 1<<endl;
            cin>>itemPrice[count];
            count++;
        }

        void getPrice(){
            int i;
            for(i=0;i<count;i++){
                cout<<"The price of item with Id is "<<itemId[i]<<" and "<<itemPrice[i]<<endl;
            }

        }
};

int main(){
    Shop Dukaan;

    

    int n;
        cout<<"Enter the number of items you want to enter : "<<endl;
        cin>>n;

    int i;

    Dukaan.initcount();

    for (i=0;i<n;i++){
        Dukaan.setPrice();
    }

    Dukaan.getPrice();
    
    return 0;
}