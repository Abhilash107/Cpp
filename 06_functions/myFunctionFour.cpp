#include <iostream>
using namespace std;

int main(){
    //lambda
    [](int nums){
        cout << "Numbers: " << nums << endl;
    }(5);//Nice

    auto num = [](int nums){
        cout << "Numbers: " << nums << endl;
    };
    num(7);


    return 0;
}