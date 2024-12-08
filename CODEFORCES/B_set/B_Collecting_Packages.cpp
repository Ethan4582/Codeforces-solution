#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";



using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

string findShortestPath(int n, vector<pair<int, int>>& packages) {
    sort(packages.begin(), packages.end(), compare);

    int currentX = 0, currentY = 0;
    string path = "";

    for (int i = 0; i < n; i++) {
        int targetX = packages[i].first;
        int targetY = packages[i].second;

        if (targetX < currentX || targetY < currentY) {
            return "NO";
        }

        path += string(targetX - currentX, 'R');
        path += string(targetY - currentY, 'U');

        currentX = targetX;
        currentY = targetY;
    }

    return "YES\n" + path;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> packages(n);
        for (int i = 0; i < n; i++) {
            cin >> packages[i].first >> packages[i].second;
        }

        string result = findShortestPath(n, packages);
        cout << result << endl;
    }

    return 0;
}
