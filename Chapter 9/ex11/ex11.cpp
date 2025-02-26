#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

    // Validation function
    void validateDimension(double value) {
        if (value <= 0.0 || value >= 20.0) {
            throw invalid_argument("Value must be > 0.0 and < 20.0");
        }
    }

public:
    // Constructor with default values
    Rectangle(double l = 1.0, double w = 1.0) : length(l), width(w) {
        validateDimension(length);
        validateDimension(width);
    }

    // Setters with validation
    void setLength(double l) {
        validateDimension(l);
        length = l;
    }

    void setWidth(double w) {
        validateDimension(w);
        width = w;
    }

    // Getters
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Calculate perimeter
    double perimeter() const {
        return 2 * (length + width);
    }

    // Calculate area
    double area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    cout << "Default Rectangle: " << endl;
    cout << "Length: " << rect.getLength() << ", Width: " << rect.getWidth() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    cout << "Area: " << rect.area() << endl;

    rect.setLength(5.0);
    rect.setWidth(10.0);
    cout << "\nUpdated Rectangle: " << endl;
    cout << "Length: " << rect.getLength() << ", Width: " << rect.getWidth() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    cout << "Area: " << rect.area() << endl;

    return 0;
}
