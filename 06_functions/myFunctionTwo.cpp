#include <iostream>
using namespace std;

void getNum(int num){
    num = num + 5;
    cout << "Number: " << num << endl;
}



int main(){
    // call by value
    int num = 10;
    getNum(num);//15
    cout << num << endl;//10


    return 0;
}