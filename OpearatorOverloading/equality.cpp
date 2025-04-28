#include <iostream>

using namespace std;

class demo{
    int a;
    public:
        void setData(int x){
            a = x;
        }

        void getData(){
            cout << "Data: " << a << endl;
        }

        bool operator==(demo obj){
           if(a == obj.a)return true;
           return false;
        }
};

int main(){
    demo a, b;
    a.setData(10);
    b.setData(12);
    if(a == b){
        cout << "Equal" << endl;
    }
    else{
        cout << "Not equal" << endl;
    }
    
    return 0;
}