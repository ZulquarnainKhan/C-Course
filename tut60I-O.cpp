#include<iostream>
#include<fstream>      // 'fstream' is also a Header file just like iostream  for which we get acess to the given 3 classes.
/*
The useful classes for working with C++ are:
    1.fstreambase
    2.ifstream --> derived from fstreambase
    3.ofstream --> derived from fstreambase    (Used for writing)
*/

/*
In order to work with files in C++, first you have to open it.
And there are two ways to open a file.
    1.Using the constructor
    2.Using the member function 'open()' of the class

*/

using namespace std;

int main(){

    //opening files using constructor
    string str1 = "Harry Bhai ";
    ofstream out("sample60.txt");   // Write operation is given by ofstream derived class (prebuilt)
    out<<str1;          // Works simply like 'cout<<' but here we can use the object name i.e. 'out' to start cout operation

    //Opening file using constructor and reading it
    string str2;
    ifstream in("sample60i.txt");

    //in>>str2;     // If we write like then we only get 'This' as space end of lines can't be readable

    getline(in,str2); // This will read the first line and stop
    getline(in,str2); // This will print second line as the same function is written twice

    cout<<str2<<endl;



    return 0;
}
