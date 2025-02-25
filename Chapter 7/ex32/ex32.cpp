#include <iostream>

using namespace std;

int recursiveMinimum(int arr[], int start, int end) {
    // Base case: if start equals end, return the element at start (or end)
    if (start == end) {
        return arr[start];
    }

    // Recursive case: find the minimum between the current element and the minimum of the rest of the array
    int minOfRest = recursiveMinimum(arr, start + 1, end);
    return (arr[start] < minOfRest) ? arr[start] : minOfRest;
}

int main() {
    int arr[] = {3, 5, 2, 9, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minValue = recursiveMinimum(arr, 0, size - 1);
    cout << "The minimum value in the array is: " << minValue << endl;
    return 0;
}