#include <iostream>

using namespace std;

class demo{
    int real, ima;
    public:
        void setData(int r, int i){
            real = r;
            ima = i;
        }

        void getData(){
            cout << "Complex Number: " << real << " + i" << ima << endl;
        }

        demo operator+(demo obj){
            demo res;
            res.real = real + obj.real;
            res.ima = ima + obj.ima;
            
            return res;
            //or
            //return demo(real + obj.real, ima + obj.ima); inline function
        }
};

int main(){
    demo a, b, c;
    a.setData(1, 2);
    b.setData(3, 4);
    c = a + b;
    c.getData();//4 + 6i
}