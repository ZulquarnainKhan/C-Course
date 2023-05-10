#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];        // By default anything written under class is taken as private data
    int itemPrice[100];     // Unless mentioned under 'public:'
    int counter;

public:
    void initcounter(){
                           // Making a function initcounter to initialise the value of counter=0
        counter = 0;       // counter is an integral func which may have garbage value  
    }                      // thus we have to make the value of counter=0 for every starting class


    void setPrice();
    void displayPrice();
};

void Shop::setPrice()
{
    cout << "Enter ID of your item : " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID is " << itemID[i] << " and " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();              // Instead of calling set price multiple time, we can call it in for loop
    dukaan.setPrice();              // Done in tut23i.cpp
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}