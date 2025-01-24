#include <iostream>
using namespace std;

int main(){
    float price = 99.99;
    int roundedPrice = (int)price;
    //int roundedPrice = (short)price;//mismatch

    int quantity = 10;
    double totalPrice = quantity * price;


    cout << totalPrice << endl;//999.9
}
