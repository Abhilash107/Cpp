#include <iostream>
using namespace std;

//pass by value
int fun(int num){
    num = 10;
}

int fun2(int num){
    num += 10;
}

//pass b ref
int fun3(int &num){
    num = 10;
}

int fun4(int &num){
    num += 10;
}

int main(){
    int a = 5, b = 10;

    int *p = &a;
    int &r = a;

    p = &b;//changing pointer
    cout << *p << endl;//10

    p = &a;//again pointing to a
    cout << *p << endl;//5

    cout << a << endl;//5
    cout << b << endl;//10
    cout << *p << endl;//5
    cout << r << endl;//5

    r = b;//This does NOT change the reference. i.e here a = b, hence *ptr also become 10 as a stores b;

    cout << a << endl;//10
    cout << b << endl;//10
    cout << *p << endl;//10
    cout << r << endl;//10

    cout << "\n" << endl;

    int num = 20;
    fun(num);
    cout << "num: " << num << endl;//20 no change

    int num2 = 20;
    fun2(num2);
    cout << "num2: "<< num2<< endl;//20 no change

    //Reason:
    //But this only changes the copy
    //not the original variable in main.

    int num3 = 20;
    fun3(num3);
    cout << "num3: " << num3 << endl;//10

    int num4 = 20;
    fun4(num4);
    cout << "num4: " <<  num4<< endl;//30
    // Function Type	What Happens
    // fun(int num)	copy passed → original unchanged
    // fun(int &num)	reference passed → original changes
}