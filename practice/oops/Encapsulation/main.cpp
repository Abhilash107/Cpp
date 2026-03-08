#include <iostream>
using namespace std;

class BankAccount {
//private
private:
    int balance;

//getter & setter
public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {

    BankAccount acc;

    acc.setBalance(5000);

    cout << acc.getBalance();
    cout << acc.balance;//error: 'int BankAccount::balance' is private within this context

    return 0;
}