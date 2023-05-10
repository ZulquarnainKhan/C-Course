#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//------------------- open() & eof() FUNCTIONS IN C++ ----------------------

int main(){
    ofstream out;
    out.open("sample60.txt");  // open() is used to open a file instead of constructor

    out<<"This is me "<<endl<<"How are you"<<endl;
    out<<"I am doing programming right now. ";
    out<<"Donot disturb me, Bye"<<endl;

    out.close();

    //ifstream in("sample60.txt");     // opening file using constructor named 'ifstream'
    ifstream in;            // We can also do it this way
    in.open("sample60.txt");   // Using 'open("file_name.txt")' function to open file for object named 'in'
    
    string str1,str2;

    //in>>str1>>str2;      // 'str1' will take 'first word' and 'str2' will take the 'second word' form the file
    //getline(in,str1);      // 'str1' will take the 'first line'
    //getline(in,str2);      // 'str2' will take the 'second line'

    //cout<<str1<<endl;
    //cout<<str2;

    string st;
    while(in.eof() == 0){   // Here we are using while loop & 'eof()' means 'end of file' & "eof()==0" happens when file is closed and no character are left
        getline(in,st);
        cout<<st<<endl;

    }

    in.close();

    return 0;
}