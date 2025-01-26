#include <iostream>
using namespace std;

int main(){
    string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0;i < 3;i++){
        cout << "Brewing " << teaTypes[i]+"....." << endl;
        for (int j = 1; j <= 3; j++){
            cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }
}