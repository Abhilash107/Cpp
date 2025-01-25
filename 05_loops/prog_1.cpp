#include <iostream>
using namespace std;

int main(){
    int teaCups;

    cout << "Enter the no. of cups: " << endl;
    cin >> teaCups;

    while(teaCups > 0){
        teaCups--;
        cout << "Served a cup\n\t" << teaCups << " remaining" << endl;
        
    }

    cout << "All tea cups are served" << endl;
}