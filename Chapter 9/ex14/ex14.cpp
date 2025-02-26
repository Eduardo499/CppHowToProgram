#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
using namespace std;

class HugeInteger {
private:
    static const int MAX_DIGITS = 40;
    int digits[MAX_DIGITS] = {0}; // Array to store each digit, most significant at index 0

    // Helper function to remove leading zeros
    void removeLeadingZeros() {
        int i = 0;
        while (i < MAX_DIGITS - 1 && digits[i] == 0) {
            i++;
        }
        if (i > 0) {
            for (int j = 0; j < MAX_DIGITS - i; ++j) {
                digits[j] = digits[j + i];
            }
            for (int j = MAX_DIGITS - i; j < MAX_DIGITS; ++j) {
                digits[j] = 0;
            }
        }
    }

public:
    // Input function (from string)
    void input(const string& number) {
        if (number.length() > MAX_DIGITS) {
            throw invalid_argument("Number exceeds maximum allowed digits.");
        }
        fill(begin(digits), end(digits), 0); // Reset digits
        int offset = MAX_DIGITS - number.length();
        for (size_t i = 0; i < number.length(); ++i) {
            if (!isdigit(number[i])) {
                throw invalid_argument("Invalid character in number.");
            }
            digits[offset + i] = number[i] - '0';
        }
    }

    // Output function
    void output() const {
        int i = 0;
        while (i < MAX_DIGITS - 1 && digits[i] == 0) {
            i++;
        }
        for (; i < MAX_DIGITS; ++i) {
            cout << digits[i];
        }
        cout << endl;
    }

    // Addition
    HugeInteger add(const HugeInteger& other) const {
        HugeInteger result;
        int carry = 0;
        for (int i = MAX_DIGITS - 1; i >= 0; --i) {
            int sum = digits[i] + other.digits[i] + carry;
            result.digits[i] = sum % 10;
            carry = sum / 10;
        }
        return result;
    }

    // Subtraction
    HugeInteger subtract(const HugeInteger& other) const {
        HugeInteger result;
        int borrow = 0;
        for (int i = MAX_DIGITS - 1; i >= 0; --i) {
            int diff = digits[i] - other.digits[i] - borrow;
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.digits[i] = diff;
        }
        result.removeLeadingZeros();
        return result;
    }

    // Comparison functions
    bool isEqualTo(const HugeInteger& other) const {
        return equal(begin(digits), end(digits), begin(other.digits));
    }

    bool isNotEqualTo(const HugeInteger& other) const {
        return !isEqualTo(other);
    }

    bool isGreaterThan(const HugeInteger& other) const {
        for (int i = 0; i < MAX_DIGITS; ++i) {
            if (digits[i] > other.digits[i]) return true;
            if (digits[i] < other.digits[i]) return false;
        }
        return false;
    }

    bool isLessThan(const HugeInteger& other) const {
        return !isGreaterThanOrEqualTo(other);
    }

    bool isGreaterThanOrEqualTo(const HugeInteger& other) const {
        return isEqualTo(other) || isGreaterThan(other);
    }

    bool isLessThanOrEqualTo(const HugeInteger& other) const {
        return isEqualTo(other) || isLessThan(other);
    }

    bool isZero() const {
        return all_of(begin(digits), end(digits), [](int d) { return d == 0; });
    }
};

int main() {
    HugeInteger num1, num2;
    num1.input("12345678901234567890");
    num2.input("98765432109876543210");

    cout << "Number 1: ";
    num1.output();

    cout << "Number 2: ";
    num2.output();

    HugeInteger sum = num1.add(num2);
    cout << "Sum: ";
    sum.output();

    HugeInteger diff = num2.subtract(num1);
    cout << "Difference: ";
    diff.output();

    cout << "Number 1 is equal to Number 2? " << (num1.isEqualTo(num2) ? "Yes" : "No") << endl;
    cout << "Number 1 is greater than Number 2? " << (num1.isGreaterThan(num2) ? "Yes" : "No") << endl;
    cout << "Number 1 is zero? " << (num1.isZero() ? "Yes" : "No") << endl;

    return 0;
}
