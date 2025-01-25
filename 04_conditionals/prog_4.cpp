#include <iostream>
using namespace std;

int main(){
    int choice;
    double price;

     

    cout << "Select your tea\n" << endl;
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Milk Tea\n";
    cout << "4. Red Tea\n";
    cout << "5. Black Tea\n";
    cin >> choice;

    switch(choice){
        case 1:
            price = 2.0;
            cout << "Selected Green Tea. Price: " << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "Selected Green Tea. Price: " << price << endl;
             break;
        case 3:
            price = 4.0;
            cout << "Selected Green Tea. Price: " << price << endl;
             break;
        case 4:
            price = 5.0;
            cout << "Selected Green Tea. Price: " << price << endl;
             break;
        case 5:
            price = 6.0;
            cout << "Selected Green Tea. Price: " << price << endl;
        default:
            cout << "Invalid choice!!" << endl;

    }

}