#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double miles = 0.0;
    double gallons = 0.0;
    double totalMiles = 0.0;
    double totalGallons = 0.0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;

        if (miles == -1) {
            break;
        }

        cout << "Enter gallons used: ";
        cin >> gallons;

        if (gallons <= 0) {
            cout << "Invalid input for gallons. Please try again.\n";
            continue;
        }

        double tripMPG = miles / gallons;
        cout << "Miles per gallon for this trip: " << tripMPG << endl;

        totalMiles += miles;
        totalGallons += gallons;

        if (totalGallons > 0) {
            double combinedMPG = totalMiles / totalGallons;
            cout << "Combined miles per gallon so far: " << combinedMPG << endl;
        }
    }

    cout << "\nProgram terminated." << endl;
    return 0;
}