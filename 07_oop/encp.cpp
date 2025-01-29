#include <iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        //getter
        double getBalance() const{//new syntax
            return balance;
        }

        //Method to deposit 
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }
            else{
                cout << "Invalid amount!!" << endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << amount << " withdrawn" <<endl;
            }else{
                cout << "Invalid withdraw amount" << endl;
            }
        }


};

int main(){
    BankAccount myAccount("12344s456", 300.0);
    myAccount.deposit(100);
    cout << myAccount.getBalance() << endl;
    myAccount.withdraw(400);
    cout << myAccount.getBalance() << endl;


    return 0;

}
