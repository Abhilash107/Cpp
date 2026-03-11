#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    vector<int> v = {4,1,3,2};
//SORT
    sort(v.begin(), v.end());

    for(int x : v) cout << x << " ";//1 2 3 4

    cout<< "\n" << endl;
//REVERSE
    reverse(v.begin(), v.end());
    for(int x : v) cout << x << " ";

    cout<< "\n" << endl;
//FIND
    auto it = find(v.begin(), v.end(), 4);

    if(it != v.end())
    cout << "Found" << endl;

//COUNT
    cout << count(v.begin(), v.end(), 2) << endl;

//BINARY SEARCH
    vector<int> v1 = {1,2,3,4,5};
    if(binary_search(v1.begin(), v1.end(), 5))
    cout << "Found" << endl;
    

    vector<int> v2 = {10,40,30};

    cout << *max_element(v2.begin(), v2.end()) << endl;
    cout << *min_element(v2.begin(), v2.end()) << endl;

    
    vector<int> v3 = {1,2,3,4};
    cout << accumulate(v3.begin(), v3.end(), 0) << endl;
}