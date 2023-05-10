#include<iostream>
#include<string>
using namespace std;

// This is also done by myself in tut22i.cpp

class binary{
    string str;

    public:
        void give(void);
        void check_bin(void);
        void invert(void);
};

void binary :: give(void){

    cout<<"Enter a binary number : "<< endl;
    cin>>str;
}

void binary ::check_bin(void){
    
    for (int i=0; i<str.length(); i++){
        if ((str.at(i)!='0')&&(str.at(i)!='1')){
            cout<<"Not a binary number ";
            exit(0);
        }

    }
    
}

void binary::invert(void){      
    
    check_bin();                // This is known as nesting of member function as 'check_bin' func is called inside 'invert' function

    for(int i=0;i<str.length();i++){   
        if(str.at(i)=='0'){
            str.at(i)='1';
            continue;
        }
        
        else if(str.at(i)=='1'){
            str.at(i)='0';
            continue;
        }
        
        
    }
    cout<<str;
}

int main(){

    binary b;
    b.give();
    //b.check_bin();        // Instead of writing 'n.check_bin();' here we can also write 'check_bin();' inside 'invert' function
    b.invert();

    
    
    
    return 0;
}