#include <iostream>
using namespace std;

int main(){
    int test,a,b,sum,con;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>a>>b;
        sum=a+b;
        //int p=prime(sum);
        //cout<<sum<<p<<endl;
        for(int j=2;j<sum;j++){
            if((sum%j)==0){
                con=1;
                break;
            }
            else{
                continue;
            }
        }
    
        if(con!=1){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
	
	return 0;
}
