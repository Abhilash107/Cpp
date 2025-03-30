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

        void operator=(demo obj){
            a = obj.a;
        }
};

int main(){
    demo a, b;
    a.setData(10);
    b.setData(12);
    a = b;
    a.getData();//12
}