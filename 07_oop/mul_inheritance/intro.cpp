#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void gdx(){
            cout << "Enter A: ";
            cin >> a;
        }

        void disp(){
            cout << "AAAA: " << a <<  endl;
        }
};

class B{
    int b;
    public:
    void gdy(){
        cout << "Enter B: ";
        cin >> b;
    }

    void disp(){
        cout << "BBBB: " << b << endl;
    }
};

class C: public A, public B{
    int c;
    public:
        void gdz(){
            A::gdx();//don't nedd score resolution as we have only one gdx in class A
            B::gdy();//don't nedd score resolution as we have only one gdy in class B
        }

        void disp(){
            A::disp();
            B::disp();
        }
};

int main(){
    C obj;
    obj.gdz();
    obj.disp();
}