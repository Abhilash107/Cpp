#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;//Implementation: Doubly Linked List

    l.push_back(20);
    l.push_front(10);
    l.push_back(30);

    for(int x : l)
        cout << x << " ";
}
// Properties
// Property	        Value
// Order	        Maintained
// Duplicate	    Allowed
// Random access	❌ Not allowed
// Insert/Delete	O(1)
// Structure	    Doubly Linked List