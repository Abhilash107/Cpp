#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    //int & number = 100;  // !Error

    cout << a <<"  " <<   b << endl;
    a += 10;
    cout << a <<"  " <<   b << endl;
    b -= 10;
    cout << a <<"  " <<   b << endl;

}