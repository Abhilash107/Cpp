#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    int id;
    string name;

    void display(){
        cout << id << " " << name << endl;
    }
};

int main(){

    Student s1;
    s1.id = 1;
    s1.name = "Abhilash";

    s1.display();


    Student s2 = {2, "Abhishek"};

    s2.display();

    cout << (s1 == s2);//error

    return 0;
}