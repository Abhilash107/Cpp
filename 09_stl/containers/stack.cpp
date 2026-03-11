#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}
// Properties
// Property	  Value
// Order	  LIFO
// Access	  Only top
// Insert	  O(1)
// Delete	  O(1)