#include <iostream>
using namespace std;

int main(){
    bool isStudent;
    int cupsPurchased;
    cout << "Are you a Student?\n Enter 1 for yes and 0 for no:" << endl;
    cin >> isStudent;
    cout << "Enter the no. of cups purchased: " << endl;
    cin >> cupsPurchased;

    if((cupsPurchased > 15) || isStudent){
        cout << "You will get a subscription discount." << endl;
    }else{
        cout << "You won't get a subscription discount." << endl;
    }


    return 0;
}