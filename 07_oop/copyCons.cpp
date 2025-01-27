#include <iostream>
#include <vector>
using namespace std;

class Code{
    public:
        string* name;
        int userId;
        vector<string> list;

        //Parameterized constructor
        Code(string n, int id, vector<string> givenList){
            name = new string(n);//dynamically allocated
            userId = id;
            list = givenList;
            cout << "Constructor called" << endl;
        }

        Code(Code& other){
            name = new string(*other.name);
            userId = other.userId;
            list = other.list;
        }

        ~Code(){
            delete name;
        }

        void display(){
            cout << "Name: " << *name <<endl;
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
    myCode.display();//attributes are set inside constructor

    //Copy the Object
    Code copyCode = myCode;
    copyCode.display();

    *myCode.name = "Js";
    

    myCode.display();
    copyCode.display();
    //No change in the copied obj
    // If a pointer is used then changes might be seen



}