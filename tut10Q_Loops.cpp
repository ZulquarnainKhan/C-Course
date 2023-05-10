//to make a table of 6 using c++ codes

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

//Using for loop
    //int i;
    //for(i=1 ; i<=10 ; i++){

    //    cout<<"6 * "<<i<<" = "<<i*6<<endl;
    //}

//using while loop
    int i=1;

    //while(i<=10){
    //    cout<<"6 * "<<i<<" = "<<i*6<<endl;
    //    i++;
 cout<<endl;   

// using do-while loop
    do{
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;
        i++;
     
    }
    while(i<=10);

    //}
    cout<<"used  do while loop";
    return 0;
}