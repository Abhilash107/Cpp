#include <iostream>
using namespace std;

int main(){
    int cupsPurchased;
    cin >> cupsPurchased;

    if(cupsPurchased > 20){
        cout << "Badge: " << "Gold"<< endl;
    }
    else if(cupsPurchased >= 10 && cupsPurchased <= 20){
        cout << "Badge: " << "Silver"<< endl;
    }
    else{
        cout << "No Batch for you!" << endl;
    }
    return 0;

}