#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define nl '\n'
using namespace std;

const int N = 4e5+5;
int n, pfx[N];
string s;

void kmp(int n, string &s, int *pfx) {
    for(int i = 1, j = 0; i < n; i++) {
        while(j && s[j] != s[i]) j = pfx[j-1];
        if(s[j] == s[i]) j++;
        pfx[i] = j;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> s;
    n = s.size();
    kmp(n, s, pfx);
    
    if(pfx[n-1] <= n / 2) cout << "NO" << nl;
    else {
        cout << "YES" << nl;
        cout << s.substr(0, pfx[n-1]) << nl;
    }
    
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

// Function to compute the LPS (Longest Prefix Suffix) array
vector<int> computeLPS(string &pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    for(int i = 1, j = 0; i < m; ) {
        if(pattern[i] == pattern[j]) {
            lps[i++] = ++j;
        } else if(j) {
            j = lps[j - 1];
        } else {
            lps[i++] = 0;
        }
    }
    return lps;
}

// Function to perform KMP search
vector<int> KMPSearch(string &text, string &pattern) {
    int n = text.size(), m = pattern.size();
    vector<int> lps = computeLPS(pattern);
    vector<int> matches;  // Stores the starting indices of matches

    for(int i = 0, j = 0; i < n; ) {
        if(pattern[j] == text[i]) {
            i++, j++;
        }
        if(j == m) {
            matches.push_back(i - j);  // Pattern found at index (i - j)
            j = lps[j - 1];
        } else if(i < n && pattern[j] != text[i]) {
            if(j) j = lps[j - 1];
            else i++;
        }
    }
    return matches;
}

// Main function
int main() {
    string text = "ababcabcabababd";
    string pattern = "ababd";
    vector<int> matches = KMPSearch(text, pattern);

    for(int idx : matches) {
        cout << "Pattern found at index " << idx << endl;
    }

    return 0;
}
