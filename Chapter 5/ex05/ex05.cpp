#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numValues = 0;
    int value = 0;
    int sum = 0;

    cout << "Enter the number of values to sum: ";
    cin >> numValues;

    for (int i = 0; i < numValues; ++i) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value;
        sum += value;
    }

    cout << "Sum of the entered values: " << sum << endl;
}