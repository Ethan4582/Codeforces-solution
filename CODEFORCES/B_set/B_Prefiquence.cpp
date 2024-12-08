// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; i++)
// #define p(a) cout << a << "\n";
// #define p2(a, b) cout << a << " " << b << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// int main()
// {
//     fastread();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         string a, b;
//         cin >> a >> b;

//         int k = 0, j = 0;
//         for (int i = 0; i < n; i++)
//         {
//             while (j < m && a[i] != b[j])
//             {
//                 j++;
//             }
//             if (j < m)
//             {
//                 k++;
//                 j++;
//             }
//         }
//        p(k);
//     }

//     return 0;

// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string a, b;
        cin >> a >> b;

        int k = 0;
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
                k++;
            }
            j++;
        }
        
        cout << k << "\n";
    }

    return 0;
}




