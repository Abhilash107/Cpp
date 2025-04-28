#include <iostream>
using namespace std;

class Test {
    int x = 10;
    Test(){}

    Test(int x = 5) {
        cout << x; // Correct: access the class member x
    }

};

int main() {
    Test obj(5);
    
    return 0;
}
