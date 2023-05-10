#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;        //Integer vector with dynamic size
    vec1={1,21,31,5};
    display(vec1);           // This will not display anything as vec1 is empty
    sort(vec1.begin(),vec1.end());
    display(vec1);
    vector<char> vec2(4);    // Character vector with size = 4
    vec2={'a','b','c','d'};
    vector<char> vec3(vec2); // Character vector with size = 4 from vec2
    display(vec2);
    display(vec3);
    vector<int> vec4(6,3);   // This will print 6 elements having 3 i.e. 3 3 3 3 3 3 
    display(vec4);
    return 0;
}