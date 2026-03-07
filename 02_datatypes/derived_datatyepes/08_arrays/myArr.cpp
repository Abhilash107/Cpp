#include <iostream>
using namespace std;

int main(){
    //Contiguous memory allocation
    // similar datatype
    int nums[5] = {1,2,3,4,5};
    for(int element: nums){
        cout << element << " ";
    }

    // here if we try to access an invalid index of arr, an garbage value is returned
    cout << endl;
    for(int i = 0;i < 5;i++){
        cout << nums[i] << " ";
    }



}
