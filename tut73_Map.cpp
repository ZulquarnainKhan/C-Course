#include<iostream>
#include<string>
#include<map>      /// Map are key value pairs i.e. key will map a value (key->value)
using namespace std;

// Map is an associative Array
// There are no sequence in mapping they arranged in an sorted manner

int main(){                        // If we write only maps then it will act as orderd(arranged) according to the key value
    map<string,int> marksMap;      // Syntax is ' map<key_type , Value_type> map_name; '
    
    marksMap["Jack"]=98;
    marksMap["Rohan"]=2;
    marksMap["Harry"]=9;
    //marksMap.insert({"Harry",85});
    marksMap.insert({"Kozume",5});

    cout<<marksMap.count("Harry")<<endl;   // Used to count the Key generaslly used to find Key is present or not

    map<string,int> :: iterator itr;
    for(itr=marksMap.begin();itr!=marksMap.end();itr++){    // This will print Harry then JAck then Rohan as it already ordered map  
        cout<<(*itr).first<<" "<<(*itr).second<<endl;       // *itr is used to see value stored inside the iterator
    }                                                       // first is used to get Key and second is used to get Value
    cout<<"The size of marksMap is: "<<marksMap.size()<<endl;
    cout<<"The return value of empty is: "<<marksMap.empty()<<endl;

    cout<<marksMap.find("Jack")->second<<endl;    // Use of find value in Key

    return 0;
}