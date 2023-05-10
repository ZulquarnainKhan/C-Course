#include<iostream>
using namespace std;

//--------------------------------Default value---------------------------------------
float money_received(float principle,float factor=1.06){    // Here factor has a default value 1.08
    int r=principle*factor;                   // If we donot give any value to it in main body then it will use default value        
    return r;                                 // first we must write compulsary arguments ex 'principle' then we must write default arguments at last
};                                            // ex (float principle , int time, float factor=1.08 ) -------> Here factor is default thus we have put it at last.
                                              // otherwise it will give an error 
int main(){
    float money=1000;
    cout<<"If you have "<<money<<" in your bank account, you will receive "<<money_received(money)<<" RS after one year"<<endl;
        // Here we have not given any value to factor variable thus it is taking its default value 1.08
    cout<<"For VIP: If you have "<<money<<" in your bank account, you will receive "<<money_received(money,1.10)<<" RS after one year"<<endl;
        // Here we have given factor as 1.10, thus it will use 1.10 value in the func money_received
    return 0;
};