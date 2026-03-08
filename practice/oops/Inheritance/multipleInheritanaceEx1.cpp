#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A function" << endl;
    }
};
class B {
public:
    void showB() {
        cout << "Class B function" << endl;
    }
};
class C : public A, public B {
};


class Person {
public:
    string name;
};

class Student {
public:
    int roll;
};

class Result : public Person, public Student {
public:
    void display() {
        cout << name << " " << roll << endl;
    }
};

int main() {

    C obj;

    obj.showA();
    obj.showB();
}