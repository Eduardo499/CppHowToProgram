#include <iostream>
#include <array>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    for (size_t i = 0; i < str.length() / 2; ++i) {
        if (str[i] != str[str.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int SIZE = 5;
    array<string, SIZE> words = {""};

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }

    cout << "Palindromes entered: ";
    for (int i = 0; i < SIZE; ++i) {
        if (isPalindrome(words[i])) {
            cout << words[i] << " ";
        }
    }
    cout << endl;

    return 0;
}