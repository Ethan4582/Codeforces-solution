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
#define p(a) cout << a << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;

int solve(vector<string>& words, int n, int m, vector<bool>& used, int currLine, int currLen, int count, vector<vector<int>>& memo) {
    if (currLine >= n) return count;

    int mask = 0;
    for (int i = 0; i < used.size(); ++i) {
        if (used[i]) {
            mask |= (1 << i);
        }
    }

    if (memo[currLine][mask] != -1) {
        return memo[currLine][mask];
    }

    int maxCount = count;
    for (int i = 0; i < words.size(); i++) {
        if (used[i]) continue;

        int wordLen = words[i].length();
        if (wordLen > m) continue;

        if (currLen == 0) {
            used[i] = true;
            int nextCount = solve(words, n, m, used, currLine, wordLen, count + 1, memo);
            maxCount = max(maxCount, nextCount);
            used[i] = false;
        } else if (currLen + 1 + wordLen <= m) {
            used[i] = true;
            int nextCount = solve(words, n, m, used, currLine, currLen + 1 + wordLen, count + 1, memo);
            maxCount = max(maxCount, nextCount);
            used[i] = false;
        }
    }

    // Try starting a new line if current line has any words
    if (currLen > 0) {
        maxCount = max(maxCount, solve(words, n, m, used, currLine + 1, 0, count, memo));
    }

    return memo[currLine][mask] = maxCount;
}

int main() {
    fastread();
    int k;
    cin >> k;

    vector<string> words(k);
    for (int i = 0; i < k; i++) {
        cin >> words[i];
    }

    int n, m;
    cin >> n >> m;

    vector<bool> used(k, false);
    vector<vector<int>> memo(n, vector<int>(1 << k, -1));
    cout << solve(words, n, m, used, 0, 0, 0, memo) << "\n";

    return 0;
}

