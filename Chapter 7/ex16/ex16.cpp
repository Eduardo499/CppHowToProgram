#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int rolls = 36000;
    const int sides = 6;
    array<int, 13> sums = {};

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < rolls; ++i) {
        int die1 = 1 + rand() % sides;
        int die2 = 1 + rand() % sides;
        int sum = die1 + die2;
        ++sums[sum];
    }

    cout << "Sum\tFrequency" << endl;
    for (int i = 2; i < sums.size(); ++i) {
        cout << i << "\t" << sums[i] << endl;
    }

    return 0;
}