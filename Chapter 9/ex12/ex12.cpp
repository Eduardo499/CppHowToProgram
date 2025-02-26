#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

struct Point {
    double x, y;
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}
};

class EnhancedRectangle {
private:
    Point p1, p2, p3, p4;

    // Validation of coordinates
    void validatePoint(const Point& p) {
        if (p.x < 0.0 || p.y < 0.0 || p.x > 20.0 || p.y > 20.0) {
            throw invalid_argument("Coordinates must be in the first quadrant and <= 20.0");
        }
    }

    // Check if the points form a rectangle
    bool isRectangle(const Point& a, const Point& b, const Point& c, const Point& d) {
        double d1 = distance(a, b);
        double d2 = distance(b, c);
        double d3 = distance(c, d);
        double d4 = distance(d, a);
        double diag1 = distance(a, c);
        double diag2 = distance(b, d);
        return (d1 == d3 && d2 == d4 && diag1 == diag2);
    }

    // Distance between two points
    double distance(const Point& p1, const Point& p2) const {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

public:
    // Constructor with validation
    EnhancedRectangle(const Point& a, const Point& b, const Point& c, const Point& d) {
        setPoints(a, b, c, d);
    }

    // Set points with validation
    void setPoints(const Point& a, const Point& b, const Point& c, const Point& d) {
        validatePoint(a);
        validatePoint(b);
        validatePoint(c);
        validatePoint(d);
        if (!isRectangle(a, b, c, d)) {
            throw invalid_argument("The points do not form a rectangle.");
        }
        p1 = a;
        p2 = b;
        p3 = c;
        p4 = d;
    }

    // Length (greater dimension)
    double length() const {
        return max(distance(p1, p2), distance(p2, p3));
    }

    // Width (smaller dimension)
    double width() const {
        return min(distance(p1, p2), distance(p2, p3));
    }

    // Perimeter
    double perimeter() const {
        return 2 * (length() + width());
    }

    // Area
    double area() const {
        return length() * width();
    }

    // Check if square
    bool isSquare() const {
        return length() == width();
    }
};

int main() {
    try {
        Point p1(1.0, 1.0);
        Point p2(5.0, 1.0);
        Point p3(5.0, 4.0);
        Point p4(1.0, 4.0);

        EnhancedRectangle rect(p1, p2, p3, p4);

        cout << "Length: " << rect.length() << endl;
        cout << "Width: " << rect.width() << endl;
        cout << "Perimeter: " << rect.perimeter() << endl;
        cout << "Area: " << rect.area() << endl;
        cout << "Is square? " << (rect.isSquare() ? "Yes" : "No") << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
