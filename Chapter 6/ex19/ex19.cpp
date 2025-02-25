#include  <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double side1, double side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

int main() {
    double side1Value = 0;
    double side2Value = 0;

    cout << "Enter the value of side 1: ";
    cin >> side1Value;

    cout << "Enter the value of side 2: ";
    cin >> side2Value;

    cout << "The hypotenuse of the triangle is: " << hypotenuse(side1Value, side2Value) << endl;

    return 0;
}