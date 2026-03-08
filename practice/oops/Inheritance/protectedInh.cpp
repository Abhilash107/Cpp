#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : protected Animal {
public:
    void bark() {
        eat(); // allowed inside derived class
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    // d.eat(); ❌ not allowed
    d.bark();
}