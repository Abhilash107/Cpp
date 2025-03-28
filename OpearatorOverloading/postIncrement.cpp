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
    
        void operator++(){//Pre-increment ++a
            a += 1;
        }

        void operator++(int){//Post-Increment a++
            a += 1;
        }
};

int main(){
    demo a;
    a.setData(10);
    ++a;
    a.getData();//11
    a++;
    a.getData();//12

}