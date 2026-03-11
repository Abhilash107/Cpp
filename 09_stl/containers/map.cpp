#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;

    m[1] = "Abhilash";
    m[2] = "Rahul";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;
}
//Property	    Value
//Key order	    Sorted (IMP)
//Duplicate     keys	❌ Not allowed
//Insert	    O(log n)
//Search	    O(log n)
//Structure	    Red-Black Tree