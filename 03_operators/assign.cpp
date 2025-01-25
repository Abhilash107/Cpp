#include <iostream>
using namespace std;

int main(){
    int teabags;
    cin >> teabags;

    if(teabags < 10){
        teabags += 5;
    }

    cout << "Tea bags: "<< teabags << endl;

}