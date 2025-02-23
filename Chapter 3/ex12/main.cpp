#include <iostream>
#include "Account.h"

int main() {
    Account myAccount1(100.0);
    Account myAccount2(-50.0);

    cout << "Account 1 balance: " << myAccount1.getBalance() << endl;
    cout << "Account 2 balance: " << myAccount2.getBalance() << endl;

    myAccount1.credit(50.0);
    myAccount2.credit(50.0);

    cout << "Account 1 balance: " << myAccount1.getBalance() << endl;
    cout << "Account 2 balance: " << myAccount2.getBalance() << endl;

    myAccount1.debit(150.0);
    myAccount2.debit(150.0);

    cout << "Account 1 balance: " << myAccount1.getBalance() << endl;
    cout << "Account 2 balance: " << myAccount2.getBalance() << endl;

    return 0;
}