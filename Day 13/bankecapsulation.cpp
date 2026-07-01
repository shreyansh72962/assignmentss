#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountBal;

public:
    BankAccount() {
        accountBal = 0;
    }

    void deposit(int money) {
        accountBal += money;
    }

    int getBalance() {
        return accountBal;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.deposit(250);
    cout << "Balance is " << myAccount.getBalance() << endl;
    return 0;
}
