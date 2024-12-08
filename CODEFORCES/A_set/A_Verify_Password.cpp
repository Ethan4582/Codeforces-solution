#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; i++)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));


using namespace std;

bool isStrongPassword(string password) {
    
    for (char c : password) {
        if (!islower(c) && !isdigit(c)) {
            return false;
        }
    }

 
    for (int i = 0; i < password.size() - 1; i++) {
        if (isalpha(password[i]) && isdigit(password[i + 1])) {
            return false;
        }
    }

    
    string digits = "";
    for (char c : password) {
        if (isdigit(c)) {
            digits += c;
        }
    }
    string sortedDigits = digits;
    sort(sortedDigits.begin(), sortedDigits.end());
    if (digits != sortedDigits) {
        return false;
    }

   
    string letters = "";
    for (char c : password) {
        if (islower(c)) {
            letters += c;
        }
    }
    string sortedLetters = letters;
    sort(sortedLetters.begin(), sortedLetters.end());
    if (letters != sortedLetters) {
        return false;
    }

    return true;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;

        if (isStrongPassword(password)) {
            YES
        } else {
            NO
        }
    }

    return 0;
}
