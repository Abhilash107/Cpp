#include <iostream>
using namespace std;

int main(){
    int cups;
    double pricePerCup = 3.5, totalPrice, discount;

    cout << "enter the no. of cups: " << endl;
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if(cups > 20){
        discount = 0.20;
    }
    else if(cups >= 10 && cups <= 20){
        discount = 0.10;
    }
    else{
        discount = 0;
    }
    
    totalPrice -= (totalPrice * discount);
    cout << "Total price: " << totalPrice << endl;

}