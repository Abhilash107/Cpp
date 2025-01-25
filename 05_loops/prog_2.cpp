#include <iostream>
using namespace std;

int main(){
    string response;

    do
    {
        cout << "Enter your need: " << endl;
        getline(cin , response);
    } while (response != "no");
    
}