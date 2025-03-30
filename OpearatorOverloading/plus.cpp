#include <iostream>
using namespace std;
class demo{
    int a;
    public:
        void setData(int x){
            a = x;
        }

        void getData(){
            cout << "Data: "<< a << endl;
        }
    
        demo operator+(demo obj){
            demo res;
            res.a = a + obj.a;
            return res;
        }
};

int main(){
    demo a, b, c;
    a.setData(10);
    b.setData(20);
    c = a + b;
    c.getData();//30

}