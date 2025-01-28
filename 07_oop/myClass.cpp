#include <iostream>
#include <vector>
using namespace std;

class Code{//capital letter
    //data members or attributes(variable defined with in a class)
    public: 
        string name;//name
        int userId;// id
        vector<string> list;// courses

        //member function
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
    myCode.name = "Leo";
    myCode.userId = 12434;
    myCode.list = {"OS", "CN", "DBMS", "OOPS"};
    myCode.display();

    Code myCodeTwo;
    myCodeTwo.name = "Papun";
    myCodeTwo.userId = 107;
    myCodeTwo.list = {"DM", "Phy", "Che", "Bio"};
    myCodeTwo.display();


    

    return 0;
}