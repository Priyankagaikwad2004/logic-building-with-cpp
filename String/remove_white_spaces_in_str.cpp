#include <iostream>
using namespace std;

int main() {
    string str, noSpace = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (ch != ' ')
            noSpace += ch;
    }

    cout << "String without spaces: " << noSpace;
    return 0;
}
