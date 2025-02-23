#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    int sum, difference, product, quotient;

    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;

    cout << n1 << " + " << n2 << " = " << sum << endl;
    cout << n1 << " - " << n2 << " = " << difference << endl;
    cout << n1 << " * " << n2 << " = " << product << endl;
    cout << n1 << " / " << n2 << " = " << quotient << endl;

    return 0;
}