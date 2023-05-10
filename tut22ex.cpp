#include<iostream>
#include<string>

using namespace std;

class bin{
    private:
        string s;
    public:
        void get();
        void check();
        void invert();

};

void bin::get(){
    cout<<"Enter a binary number : "<<endl;
    cin>>s;
}

void bin::check(){
    int i;
    for(i=0;i<s.length();i++){
        if((s.at(i)!='0')&&(s.at(i)!='1')){
            cout<<"The given number is not Binary"<<endl;
            exit(0);

        }
    }
}


void bin::invert(){
    int i;
    for (i=0;i<s.length();i++){
        if((s.at(i)=='0')){
            s.at(i)='1';
            continue;
        }
        else if((s.at(i)=='1')){
            s.at(i)='0';
            continue;
        }
    }
    cout<<"The inverted binary number is : "<<s;
}

int main(){
    bin b;
    b.get();
    b.check();
    b.invert();

    return 0;
}