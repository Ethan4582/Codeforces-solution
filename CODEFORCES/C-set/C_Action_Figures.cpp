#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> zro;
    vector<int> ons;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0')
            zro.pb(i);
        else
            ons.pb(i);
    }

    reverse(all(ons));
    int pzi = zro.size() - 1;
    int poi = ons.size() - 1;

  ll ttl = (ll)n * (n + 1) / 2;


    for (int i = n - 1; i >= 0; i--) {
        while (pzi >= 0 && zro[pzi] >= i)
            pzi--;
        while (poi >= 0 && ons[poi] >= i)
            poi--;
        
        if (s[i] == '1') {
            if (pzi >= 0) {
                ttl -= (i + 1);
                pzi--;
            } else if (poi >= 0) {
                ttl -= (i + 1);
                poi--;
            }
        }
    }

    cout << ttl << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

