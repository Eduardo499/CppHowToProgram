#include <iostream>
#include <array>

using namespace std;

void printArray(const array<int, 20>& arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 20;
    array<int, SIZE> numbers = {0};

    size_t uniqueCount = 0;

    for (size_t i = 0; i < SIZE; ++i) {
        int num;
        cout << "Enter number " << i + 1 << " (between 10 and 100): ";
        cin >> num;

        // Validate the number
        if (num < 10 || num > 100) {
            cout << "Number out of range. Please enter a number between 10 and 100.\n";
            --i; // Decrement i to retry this iteration
            continue;
        }

        // Check for duplicates
        bool isDuplicate = false;
        for (size_t j = 0; j < uniqueCount; ++j) {
            if (numbers[j] == num) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, store the number
        if (!isDuplicate) {
            numbers[uniqueCount] = num;
            ++uniqueCount;
        }
    }

    printArray(numbers, uniqueCount);

    return 0;
}