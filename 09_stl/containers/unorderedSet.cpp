#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate ignored

    for(int x : s)
        cout << x << " ";

}
//Property	            Description
//Order	                ❌ Not sorted
//Duplicate elements	❌ Not allowed
//Implementation	    Hash Table
//Average insertion	    O(1)
//Average search	    O(1)
//Worst case	        O(n)