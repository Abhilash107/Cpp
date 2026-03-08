#include <iostream>
using namespace std;


//1️⃣ Public Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // accessible
    d.bark();  // accessible
}