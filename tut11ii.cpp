#include <iostream>
using namespace std;
int main(){

    
    int i;
    for(i=0;i<=20;i++){

        
        if(i==12){
            cout<<"The loop skips/continue here."<<endl;
            continue;
        }
        cout<<i<<endl;
    }



    return 0;
}    