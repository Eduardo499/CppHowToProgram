#include <iostream>

using namespace std;

class Account {
    public:
        Account(double initialBalance) {
            if (initialBalance >= 0.0) {
                balance = initialBalance;
            } else {
                cout << "Initial balance was invalid." << endl;
                balance = 0.0;
            }
        }

        void credit(double amount) {
            balance += amount;
        }

        void debit(double amount) {
            if (amount > balance) {
                cout << "Debit amount exceeded account balance." << endl;
            } else {
                balance -= amount;
            }
        }

        double getBalance() const {
            return balance;
        }
    private:
        double balance;
};