#include <iostream>
#include <vector>
using namespace std;

class Code{
    public:
        string name;
        int userId;
        vector<string> list;

        //Default constructor
        Code(){
            name = "C++ Code";
            userId = 1007;
            list = {"Gcc", "G++"};
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
    Code myCode;
    myCode.display();///attributes are set inside constructor

}