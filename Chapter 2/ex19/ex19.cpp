#include <iostream>

using namespace std;

int largest(int n1, int n2, int n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    } else if (n2 >= n1 && n2 >= n3) {
        return n2;
    } else {
        return n3;
    }
}

int smallest(int n1, int n2, int n3) {
    if (n1 <= n2 && n1 <= n3) {
        return n1;
    } else if (n2 <= n1 && n2 <= n3) {
        return n2;
    } else {
        return n3;
    }
}

int main() {
    int n1, n2, n3;
    int sum, difference, product, quotient;

    cout << "Enter two integers: ";
    cin >> n1 >> n2 >> n3;

    sum = n1 + n2 + n3;
    product = n1 * n2 * n3;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << sum / 3 << endl;
    cout << "Product is " << product << endl;
    cout << "Largest is " << largest(n1, n2, n3) << endl;
    cout << "Smallest is " << smallest(n1, n2, n3) << endl;

    return 0;
}