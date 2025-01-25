#include <iostream>
using namespace std;

int main(){

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of cups: "<< endl;
    cin >> cups;
    cout << "Enter the price per cups: "<< endl;
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    //apply 5% discount
    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << discountedPrice << endl;
    }else{
        cout << totalPrice << endl;
    }

    return 0;
}