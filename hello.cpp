#include <iostream>//preprocessor directors

//using namespace std;//best practice to remove
// namespace myCode{
//     void display(){

//     }
// }
using std::cout;//Using Declarations
using std::endl;
int getNum();// function declaration

int main(){
    //myCode::display();
    //std::cout << "Hello World!" << std::endl;
    cout << "Hello World!" << endl;
    cout << getNum();

    // << 
    return 0;


    

}

int getNum(){
    return 1 + 1;
}