#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(10);
    s.insert(20);

    for(int x : s)
        cout << x << " ";
}
//Properties
// Property	        Value
// Order	        Sorted (IMP)
// Duplicate	    ❌ Not allowed
// Insert	        O(log n)
// Search	        O(log n)
// Implementation	Red-Black Tree