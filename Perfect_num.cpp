#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum = sum + i;
    }

    if (sum == num)
        cout << num << " is a Perfect Number";
    else
        cout << num << " is not a Perfect Number";

    return 0;
}
