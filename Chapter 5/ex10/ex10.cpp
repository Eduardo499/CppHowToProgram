#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    unsigned int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;  

    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}