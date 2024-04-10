#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int count = 0;
    int lower_count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == toupper(s[i])) {
            count++;
        } else {
            lower_count++;
        }
    }
    if (count > lower_count) {
        for (int i = 0; i < n; i++) {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    } else {
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}
