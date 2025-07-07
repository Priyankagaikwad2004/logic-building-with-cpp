#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << base << "^" << exponent << " = " << result;
    return 0;
}
