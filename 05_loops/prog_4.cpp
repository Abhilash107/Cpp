#include <iostream>
using namespace std;

int main(){
    string response;

    while(true){
        cout << "Enter your need: " << endl;
        getline(cin, response);
        if(response == "stop")break;

        cout << "here is your another cup" << endl;
    }

    cout << "No more tea will be served" << endl;
}