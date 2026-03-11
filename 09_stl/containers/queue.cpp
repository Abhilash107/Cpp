#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << " " << q.back()<< endl;
    

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
//Properties
//Property	Value
//Order	    FIFO
//Insert	O(1)
//Delete	O(1)
//Access	front element