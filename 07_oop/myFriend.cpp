#include <iostream>
using namespace std;

class Code{
    private:
        string name;
        int userId;

    public:
        Code(string n, int id): name(n), userId(id){}

        friend bool compare(const Code &code1, const Code &code2);

        void display() const {
            cout << name << endl;
        }

};

bool compare(const Code &code1, const Code &code2){
    return code1.userId > code2.userId;

}

int main(){
    Code myCode("Leo", 19);
    Code myCodeTwo("Messi", 10);

    myCode.display();
    myCodeTwo.display();

    if(compare(myCode, myCodeTwo)){
        cout << "More" << endl;
    }else{
        cout << "Less" << endl;
    }


}