#include<iostream>
using namespace std;

/*----------------------- INITIALISATION LIST IN CONSTRUCTORS ---------------------------

SYNTAX FOR INITIALISATION LIST IN CONSTRUCTORS:

constructor (argument-list) : initialisation-section {
    <body>
} 

class Test{
    private:
        int a , b;
    public:
        Test(int x, int y) : a(x) , b(y) {
            <body>
        }
};

*/

class Test{
    private:
        int a;
        int b;
    public:
        //Test(int x, int y) : a(x) , b(y) {        ---> This is valid and gives a and b as 2,3
        //Test(int x, int y) : a(x) , b(x+y) {      ---> This is valid and gives a and b as 2,5
        //Test(int x, int y) : a(x) , b(2*y) {      ---> This is valid and gives a and b as 2,6
        //Test(int x, int y) : a(x) , b(a+y) {      ---> This is valid and gives a and b as 2,5
        Test(int x, int y) : a(3*x) , b(a+y) {    //---> This is valid and gives a and b as 6,9
        //Test(int x, int y) : a(x+b) , b(y) {      ---> This is invalid and gives a and b as 4201021,3  (garbage value)
        //Test(int x, int y) : b(y) , a(x+b) {      ---> This is invalid as we have declared int a, b in private part thus 'a' initialises first
            cout<<"Constructor executed "<<endl;
            cout<<"The value of a and b is "<< a<<" and "<<b<<endl;
        }
};

int main(){
    Test t1(2,3);
    

    return 0;
}