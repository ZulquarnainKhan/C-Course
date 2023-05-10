#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";    // We can also use v.at(i)
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;   // integer Vector 'vec1' has variable size
    int element,size;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<": "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int> :: iterator itr = vec1.begin();     // Syntax for iterator
    vec1.insert(itr,5);  // Inserts 5 at iterator position i.e. itr=0
    vec1.insert(itr+2,10);  // Inserts 10 at iterator + 2 position i.e. i=2 (third)
    display(vec1);
    return 0;
}