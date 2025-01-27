#include <iostream>
#include <vector>
using namespace std;

class Code{
    public:
        string name;
        int userId;
        vector<string> list;

        //delegation constructor
        Code(string name): Code(name, 1, {"A", "B"}){};

        //main constructor
        Code(string n, int id, vector<string> list){
            name = n;
            userId = id;
            list = list;
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
    Code myCode("Abhilash");
    myCode.display();

}