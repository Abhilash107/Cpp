#include <iostream>
using namespace std;

// Virtual Function (Implementation in Base Class)
class Shape1 {
public:
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle1 : public Shape1 {
public:
    void draw() {
        cout << "Drawing circle" << endl;
    }
};

//Pure Virtual Function (Abstract Class)
//* You cannot create object of Shape.
class Shape2 {
public:
    virtual void draw() = 0;
};

class Circle2 : public Shape2 {
public:
    void draw() {
        cout << "Drawing circle" << endl;
    }
};




int main() {
//Derived class overrides the function.
//Circle overrides it
    Circle1 c1;
    c1.draw();

//Shape is an abstract class
//Circle must implement draw()
    Circle2 c2;
    c2.draw();

}