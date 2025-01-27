#include <iostream>
#include <vector>
using namespace std;

class Code{
    public:
        string name;
        int userId;
        vector<string> list;

        //Parameterized constructor
        Code(string n, int id, vector<string> givenList){
            name = n;
            userId = id;
            list = givenList;
            cout << "Constructor called" << endl;
        }

        void display(){
            cout << "Name: " << name <<endl;
            cout << "User id: " << userId <<endl;
            cout << "Courses: ";
            for(string str: list){//for each
                cout << str << " ";
            }
            cout << endl;

        }
};

int main(){
    Code myCode("C++", 20, {"G++", "gcc"});
    myCode.display();///attributes are set inside constructor

}