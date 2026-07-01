#include <iostream>
using namespace std;

class Bank {
    int totalFunds;

public:
    Bank() {
        totalFunds = 0;
    }

    void deposit(int amount) {
        totalFunds += amount;
    }

    void withdraw(int amount) {
        if (amount <= totalFunds) {
            totalFunds -= amount;
        } else {
            cout << "Transaction Failed: Low Balance" << endl;
        }
    }

    void display() {
        cout << "Available Balance is " << totalFunds << endl;
    }
};

int main() {
    Bank userBank;
    int d, w;

    cout << "How much to deposit? ";
    cin >> d;
    userBank.deposit(d);

    cout << "How much to withdraw? ";
    cin >> w;
    userBank.withdraw(w);

    userBank.display();

    return 0;
}
