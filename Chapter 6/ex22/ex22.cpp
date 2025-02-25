#include <iostream>

using namespace std;

void printSquare(int side) {
    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int sideValue = 0;

    cout << "Enter the side value: ";
    cin >> sideValue;

    printSquare(sideValue);

    return 0;
}