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

int main() {
    int n;
    cin >> n;  
    vector<int> points(n);  
    

    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
    
    int amazing_count = 0; 
    int best_performance = points[0];
    int worst_performance = points[0];

    for (int i = 1; i < n; ++i) {
        if (points[i] > best_performance) {  
            amazing_count++;
            best_performance = points[i];  
        }
        else if (points[i] < worst_performance) { 
            amazing_count++;
            worst_performance = points[i];  
        }
    }
    
    cout << amazing_count << "\n"; 
    
    return 0;
}


//!cleaner way 
int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}



