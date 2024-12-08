#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p2(a, b) cout << a << " " << b << "\n";

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int no_of_prices, no_of_fruits;
    cin >> no_of_prices >> no_of_fruits;

    vi price(no_of_prices);
    rep(i, 0, no_of_prices) cin >> price[i];
    sort(all(price));

    map<string, int> frequency;
    rep(i, 1, no_of_fruits + 1) {
        string fruit;
        cin >> fruit;
        frequency[fruit]++;
    }

    vi fruit_frequency;
    for (const auto& it : frequency) {
        fruit_frequency.pb(it.second);
    }
    sort(all(fruit_frequency));
    reverse(all(fruit_frequency));

    ll min_price = 0;
    rep(i, 0, fruit_frequency.size()) {
        min_price += 1LL * price[i] * fruit_frequency[i];
    }

    reverse(all(price));
    ll max_price = 0;
    rep(i, 0, fruit_frequency.size()) {
        max_price += 1LL * price[i] * fruit_frequency[i];
    }

    p2(min_price, max_price);

    return 0;
}

