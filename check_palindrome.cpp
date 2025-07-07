#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome";

    return 0;
}
