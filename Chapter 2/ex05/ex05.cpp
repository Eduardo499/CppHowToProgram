#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n1, n2, n3, product;

    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;

    product = n1 * n2 * n3;

    cout << "The product is " << product << endl;
    return 0;
}