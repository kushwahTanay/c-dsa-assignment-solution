#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return false; // Characters don't match, not a palindrome
        }
    }
    return true; // All characters matched, it's a palindrome
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}
