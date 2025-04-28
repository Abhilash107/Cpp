#include <iostream>
using namespace std;

// Define an enum for colors
enum Color { Red, Blue, Green, Yellow };
enum {three = 3};

int main() {
    // Declare a variable of type Color
    Color background = Blue;
    cout << "The value of background is: " << background << endl;

    background = (Color) 4;
    int myColor = Blue;
    cout << myColor << endl;

    // Output the integer value of the selected color
    cout << "The value of background is: " << background << endl;
    
    int code = three;



    return 0;
}
