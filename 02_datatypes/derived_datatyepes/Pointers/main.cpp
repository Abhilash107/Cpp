#include <iostream>
using namespace std;

int main(){
    int a = 10;

    int *ptr = &a;

    // cout << a << endl;// val
    // cout << &a << endl;//address
    // cout << ptr << endl;//address
    // cout << *ptr << endl;// val

    *ptr = 100;//change in ptr also changes a
    //cout << a << endl; 100


    int x = 5, y = 7;
    int *p = &x;
   
    // cout << p << endl;
    // cout << *p << endl;//5

    p = &y;// now it points to b(reassign)

    cout<< *p << endl;// 7 since p points to b now.....

    p = nullptr;

    cout << x << endl;
    cout << y << endl;
    
    cout << p << endl;//0
    cout << *p << endl;// invalid memory access







    return 0;
}