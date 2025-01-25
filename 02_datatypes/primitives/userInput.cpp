#include <iostream>
#include <string>
using namespace std;

int main(){
    string order;
    int quantity;
    cout << "Order please: "<< endl;
    getline(cin, order);
    cout << "Quantity: "<< endl;
    cin >> quantity;

    cout << order << endl;
    cout << quantity;

}