#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    if (str == reversed) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}