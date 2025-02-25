#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radiusValue = 0;

    cout << "Enter the radius of the sphere: ";
    cin >> radiusValue;

    cout << "The volume of the sphere is: " << (4.0 / 3.0) * M_PI * pow(radiusValue, 3) << endl;

    return 0;
}