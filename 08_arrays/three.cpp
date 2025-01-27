#include <iostream>
using namespace std;

int* arr(int num){
    int* nums = new int[num];//new memory of size num
    for(int i = 0;i< num;i++){
        nums[i] = (i + 1) * 10;
    }
    return nums;// return the ref of location of arr
}
int main(){
    int num = 5;
    int* newArr = arr(num);// it's an Array
    for(int i = 0;i< num;i++){
        cout << newArr[i] << " ";// no *(ptr + i) like C
    }
    // to clean up the dynamic allocated space
    delete[] newArr;


}