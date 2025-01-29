#include <iostream>
#include <vector>
using namespace std;

class Code{
    private:
        string name;
        int userId;
        vector<string> list;
    public:
        Code(){
            name = "Unknonw";
            userId = 1234;
            list = {"A", "B"};
        }

        Code(string n, int id, vector<string> list){
            name = n;
            userId = id;
            list = list;
        }

        //getter
        string getName(){
            return name;
        }

        void setName(string n){
            name = n;
        }

        int getId(){
            return userId;
        }

        void setId(int id){
            userId = id;
        }

        vector<string> getList(){
            return list;
        }

        void setList(vector<string> givenList){
            list = givenList;
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
    myCode.setName("Abhilash");
    myCode.setId(1234);
    myCode.setList({"A", "a"});
    myCode.display();


}