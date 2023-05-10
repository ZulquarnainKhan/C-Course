#include<iostream>
#include<fstream>

using namespace std;

//---------------- Reading and Writing in the same file & CLOSING FILE ------------------------
// File name is "sample60.txt"

int main(){
    // Connecting our file with 'hout' stream here 'hout' is a object of derived class
    ofstream hout("sample60.txt");     // We use ofstream derived class to write
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name;

    hout<<"My name is "<<name;     // Works simply like 'cout<<' but here we can use the object name i.e. 'hout' to start cout operation.

    hout.close();     // file will always be linked to hout object and we can't perform any other operation with other objects of ifstream class 

    ifstream hin("sample60.txt");    // We use ifstream derived class to read
    string line;
    getline(hin,line);        // This will access the 1st line from file

    hin.close();    // At the end of program the file automatically closes but it is a good practice to close it by ourself

    cout<<line<<endl;



    
    return 0;
}