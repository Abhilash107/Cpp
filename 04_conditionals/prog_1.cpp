#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cout << "Enter your order: " << endl;
    getline(cin, input);

    if(input == "Green Tea"){
        cout << "You have ordered Green Tea!" << endl;
    }
    else{
        cout << "No order!!!" << endl;
    }

    return 0;

}