#include <iostream>
#include <array>

int main() {
    const int SIZE = 20;
    std::array<int, SIZE> numbers = {0};
    int uniqueCount = 0;

    for (int i = 0; i < SIZE; ++i) {
        int num;
        std::cout << "Enter number " << i + 1 << " (between 10 and 100): ";
        std::cin >> num;

        // Validate the number
        if (num < 10 || num > 100) {
            std::cout << "Number out of range. Please enter a number between 10 and 100.\n";
            --i; // Decrement i to retry this iteration
            continue;
        }

        // Check for duplicates
        bool isDuplicate = false;
        for (int j = 0; j < uniqueCount; ++j) {
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

    // Display unique numbers
    std::cout << "Unique numbers entered: ";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}