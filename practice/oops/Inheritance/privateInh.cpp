#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : private Animal {
public:
    void bark() {
        eat(); // allowed inside class
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    // d.eat(); ❌ not allowed
    d.bark();
}