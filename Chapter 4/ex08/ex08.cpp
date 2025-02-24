#include <iostream>

using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;
    cout << "3^4 = " << power(3, 4) << endl;
    cout << "4^5 = " << power(4, 5) << endl;
    return 0;
}