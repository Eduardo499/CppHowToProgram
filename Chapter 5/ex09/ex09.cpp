#include <iostream>

using namespace std;

int main() {
    int product = 1;

    for(int i = 1; i <= 15; i += 2) {
        product *= i;
    }

    cout << "The product of the odd numbers from 1 to 15 is: " << product << endl;

    return 0;
}