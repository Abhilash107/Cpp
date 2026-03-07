#include <iostream>
using namespace std;
//call by reference
void getNum(int &num){
    num = num + 5;
    cout << "Number: " << num << endl;
}


int main(){
   
    int num = 10;
    getNum(num);//15
    cout << num << endl;//15

    return 0;
}