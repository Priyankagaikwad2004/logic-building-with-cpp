#include <iostream>
using namespace std;

int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome";

    return 0;
}
