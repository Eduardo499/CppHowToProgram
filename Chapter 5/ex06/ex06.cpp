#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int count = 0;
    int sum = 0;
    int value = 0;

    cout << "\nEnter integers to calculate the average (9999 to end): " << endl;
    while (true) {
        cin >> value;
        if (value == 9999) {
            break;
        }
        sum += value;
        ++count;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << fixed << setprecision(2);
        cout << "Average of the entered values: " << average << endl;
    } else {
        cout << "No values entered to calculate the average." << endl;
    }

    return 0;
}