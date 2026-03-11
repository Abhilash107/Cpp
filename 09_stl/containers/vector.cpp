#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10,20,30};//Implementation: Dynamic Array

    v.push_back(40);
    

    for(int x : v)
        cout << x << " ";
}
// Properties
// Property	        Value
// Order	        Maintained
// Duplicate	    Allowed
// Random access	O(1)
// Insert end	    O(1)
// Insert middle	O(n)
// Memory	        Contiguous