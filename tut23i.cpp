#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];        // By default anything written under class is taken as private data
    int itemPrice[100];     // Unless mentioned under 'public:'
    int count;

public:
    void initcount(void){
                           // Making a function initcounter to initialise the value of counter=0
        count = 0;       // counter is an integral func which may have garbage value  
    }                      // thus we have to make the value of counter=0 for every starting class


    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter ID of your item " << count + 1 << endl;
    cin >> itemID[count];
    cout << "Enter Price of your item : " << endl;
    cin >> itemPrice[count];
    count++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The price of item with ID is " << itemID[i] << " and " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcount();

    int n;
    cout<<"Enter the no of items to list : "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        dukaan.setPrice();
    }
    
    dukaan.displayPrice();

    return 0;
}