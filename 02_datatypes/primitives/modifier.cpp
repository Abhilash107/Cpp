#include <iostream>

using namespace std;

int main(){
    unsigned price1 = -10000;//0 to 4,294,967,295

    unsigned price2 = 10000;

    int price3 = -100;
    int price4 = 100;//−2,147,483,648 to 2,147,483,647

    float num1 = 1234567898;
    double num2 = 1234567898;
    long largeNums = 1234567898;//10

    short x = 32767;          // Signed short -32,768 to 32,767
    unsigned short y = 65535; // Unsigned short 0 to 65535

    cout << price1 << endl;//4294957296(garbage value)
    cout << price2 << endl;//10000
    cout << price3 << endl;//-100
    cout << price4 << endl;//100
    cout << num1 << endl;//1.23457e+009
    cout << num2 << endl;//1.23457e+009
    cout << largeNums << endl;//1234567898

    cout << x << endl;

    cout << y << endl;





    


    return 0;
}