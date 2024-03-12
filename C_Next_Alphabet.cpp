#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    // Calculate the next character
    char nextChar = c + 1;

    // If the current character is 'z', the next character should be 'a'
    if (c == 'z') {
        nextChar = 'a';
    }

    // Output the next character
    cout << nextChar << endl;

    return 0;
}
