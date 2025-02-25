#include <iostream>

using namespace std;

int integerPower(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int baseValue = 0;
    int exponentValue = 0;

    cout << "Enter the base value: ";
    cin >> baseValue;

    cout << "Enter the exponent value: ";
    cin >> exponentValue;

    cout << "The result of " << baseValue << " raised to the power of " << exponentValue << " is: " << integerPower(baseValue, exponentValue) << endl;

    return 0;
}