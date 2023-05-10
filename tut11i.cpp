#include <iostream>
using namespace std;
int main(){

    
    int i;
    for(i=0;i<=20;i++){

        
        if(i==12){
            cout<<"The loop break here."<<endl;
            break;
        }
        cout<<i<<endl;
    }



    return 0;
}    