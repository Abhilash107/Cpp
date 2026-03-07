#include <iostream>
using namespace std;


//function declaration
void getDetails(string name);//name is a parameter
void getDetails(int userId);//name is a parameter
void getDetails(string name = "cr7");//name is a parameter


int checkTemperature(int temp);//temp is a parameter

int main(){
    int temp = checkTemperature(50);//here 50 is an argument
    cout << temp <<endl;
    getDetails(12344556);
    getDetails("Leo");
    getDetails();
    

    return 0;
}

//function definition

void getDetails(string name){
    cout << "Your name: "<< name << endl;
}

void getDetails(int userId){
    cout << "Your Id: "<< userId << endl;
}



int checkTemperature(int temp){
    return temp;
}



// returnType function name (params){
    //Function body

//}
// void -> empty
// 
