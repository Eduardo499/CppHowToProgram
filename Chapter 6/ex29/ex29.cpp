#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    for (int i = 2; i <= 10000; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
