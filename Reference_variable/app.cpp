#include <iostream>
using namespace std;

void fun(int &x){
    x += 10;
}

int main(){
    int a = 10;
    //fun(&a); // !Error
    fun(a);
    cout << a<< endl;
    

}