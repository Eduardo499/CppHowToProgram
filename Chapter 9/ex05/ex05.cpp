#include <iostream>
using namespace std;

class Complex {
private:
    double realPart;
    double imaginaryPart;

public:
    // Constructor with default values
    Complex(double real = 0.0, double imaginary = 0.0) : realPart(real), imaginaryPart(imaginary) {}

    // Addition of two complex numbers
    Complex add(const Complex& other) const {
        return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
    }

    // Subtraction of two complex numbers
    Complex subtract(const Complex& other) const {
        return Complex(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
    }

    // Print complex number in the form (a, b)
    void print() const {
        cout << "(" << realPart << ", " << imaginaryPart << ")" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    cout << "c1: ";
    c1.print();

    cout << "c2: ";
    c2.print();

    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.print();

    Complex diff = c1.subtract(c2);
    cout << "Difference: ";
    diff.print();

    return 0;
}
