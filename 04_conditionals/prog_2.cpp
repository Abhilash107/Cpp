#include <iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter the current hour between (0-23)" << endl;
    cin >> hour;

    if(hour >= 8 && hour <= 18){
        cout << "tea shop is open" << endl;
    }
    else{
        cout << "tea shop is closed" << endl;
    }
    return 0;
}


