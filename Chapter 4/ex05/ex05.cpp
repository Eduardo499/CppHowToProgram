#include <iostream>

using namespace std;

int main() {
    unsigned int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "The sum of the first 10 integers is " << sum << endl;
}