#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int accountNumber = 0;
    double beginningBalance = 0.0;
    double totalCharges = 0.0;
    double totalCredits = 0.0;
    double creditLimit = 0.0;
    double newBalance = 0.0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter account number (-1 to quit): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = beginningBalance + totalCharges - totalCredits;

        cout << "New balance: " << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Account: " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "New balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}