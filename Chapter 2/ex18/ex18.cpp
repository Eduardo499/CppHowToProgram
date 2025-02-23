#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    if (n1 == n2) {
        cout << "These numbers are equal." << endl;
    } else if (n1 < n2) {
        cout << n1 << " is less than " << n2 << endl;
    } else {
        cout << n1 << " is greater than " << n2 << endl;
    }

    return 0;
}