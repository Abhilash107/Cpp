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

//! Diamond problem
class A {
public:
    int x;
};

class B : public A { };

class C : public A { };

class D : public B, public C { };


//fixing it
class A {
public:
    int x;
};

class B : virtual public A { };

class C : virtual public A { };

class D : public B, public C { };
//But memory layout changes.
//Instead of two A objects, there is only one shared A.
//You are telling the compiler:
//If multiple classes inherit from A, share the same A instance instead of creating duplicates.
//The compiler internally creates one common base object.

int main() {

    C obj;

    obj.showA();
    obj.showB();

    Result r;

    r.name = "Rahul";
    r.roll = 101;

    r.display();


}