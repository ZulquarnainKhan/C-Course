#include<iostream>
#include<string>
using namespace std;

class cnum{

    string s;
    public:
        void get(void);
        void check(void);
        void invert(void);


};

void cnum::get(void){
    cout<<"Enter a binary number : "<<endl;
    cin>>s;
}

void cnum::check(void){
    for(int i=0;i<s.length();i++){
        if((s.at(i)!='1')&&(s.at(i)!='0')){
            cout<<"Not a binary number "<<endl;
            exit(0);
        }
    }
}

void cnum::invert(void){
    
    for(int a=0;a<s.length();a++){
        if(s.at(a)=='0'){
            
            s.at(a)='1';
            continue;
        }
        

        else if(s.at(a)=='1'){
            s.at(a)='0';
            continue;
        }
        
        else{
            cout<<"Not a binary";
            exit(0);
        }   
    }
    cout<<s;
}


int main(){
    cnum n;
    n.get();      
    n.check();        
    n.invert();



    return 0;
}
