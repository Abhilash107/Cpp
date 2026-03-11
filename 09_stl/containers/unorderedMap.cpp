#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> m;

    m[1] = "Abhilash";
    m[2] = "Ravi";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;
}
//Properties
//Property	        Value
//Order	            Not maintained
//Duplicate         keys	❌ Not allowed
//Insert	        O(1) average
//Search	        O(1) average
//Implementation	Hash Table