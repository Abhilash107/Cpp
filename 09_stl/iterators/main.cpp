#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10,20,30};

    // vector<int>::iterator it;

    // for(it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    //}

    //modern style
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    auto it2 = v.rbegin();
    cout << *it2 << endl;//30

    //rend() returns a reverse iterator pointing before the first element.
    for(auto it = v.rbegin(); it != v.rend(); it++)
    cout << *it << " ";

    vector<int> v3 = {5,10,15};

    auto it3 = v3.begin();//5

    ++it3;//10

    cout << "\n" <<*it3 << endl;


}