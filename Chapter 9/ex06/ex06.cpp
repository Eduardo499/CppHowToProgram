#include <iostream>
#include <numeric> // For std::gcd
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;

    // Function to reduce the fraction
    void reduce() {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        // Keep the denominator positive
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    // Constructor with default values, automatically reduces
    Rational(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denom == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        reduce();
    }

    // Addition
    Rational add(const Rational& other) const {
        return Rational(numerator * other.denominator + other.numerator * denominator,
                        denominator * other.denominator);
    }

    // Subtraction
    Rational subtract(const Rational& other) const {
        return Rational(numerator * other.denominator - other.numerator * denominator,
                        denominator * other.denominator);
    }

    // Multiplication
    Rational multiply(const Rational& other) const {
        return Rational(numerator * other.numerator, denominator * other.denominator);
    }

    // Division
    Rational divide(const Rational& other) const {
        if (other.numerator == 0) {
            throw invalid_argument("Cannot divide by a Rational number with numerator 0.");
        }
        return Rational(numerator * other.denominator, denominator * other.numerator);
    }

    // Print in a/b format
    void printFraction() const {
        cout << numerator << "/" << denominator << endl;
    }

    // Print in floating-point format
    void printFloat() const {
        cout << static_cast<double>(numerator) / denominator << endl;
    }
};

int main() {
    Rational r1(2, 4);
    Rational r2(3, 6);

    cout << "r1: ";
    r1.printFraction();

    cout << "r2: ";
    r2.printFraction();

    Rational sum = r1.add(r2);
    cout << "Sum: ";
    sum.printFraction();

    Rational diff = r1.subtract(r2);
    cout << "Difference: ";
    diff.printFraction();

    Rational prod = r1.multiply(r2);
    cout << "Product: ";
    prod.printFraction();

    Rational quot = r1.divide(r2);
    cout << "Quotient: ";
    quot.printFraction();

    cout << "Floating-point representation of sum: ";
    sum.printFloat();

    return 0;
}