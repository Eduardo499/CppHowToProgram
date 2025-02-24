#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double baseSalary = 200.0;
    const double commissionRate = 0.09;
    double grossSales = 0.0;
    double earnings = 0.0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter salesperson's gross sales for the week (-1 to quit): ";
        cin >> grossSales;

        if (grossSales == -1) {
            break;
        }

        earnings = baseSalary + (commissionRate * grossSales);
        cout << "Salesperson's earnings: $" << earnings << endl;
        cout << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}