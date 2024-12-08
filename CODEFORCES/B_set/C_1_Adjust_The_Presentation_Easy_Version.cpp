#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int a[n];
        vector<int> b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;

            if (b.empty() || b.size() > 0 && b.back() != x)
            {
                b.push_back(x);
            }
        }

        m = b.size();

        unordered_set<int> s;
        int ans = 1;

        int id = 0;

        for (int i = 0; i < m; i++)
        {

            if (b[i] == a[id])
            {
                s.insert(a[id]);
                id++;
            }
            else
            {
                auto it = s.find(b[i]);

                if (it != s.end())
                {
                }
                else
                {
                    ans = 0;
                    break;
                }
            }
        }

        if (ans)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "TIDAK" << endl;
        }
    }
}


// def main():
//     t = int(input())
//     for _ in range(t):
//         n, m, q = map(int, input().split())
//         a = list(map(int, input().split()))
        
//         b = []
//         for _ in range(m):
//             x = int(input())
//             if not b or b[-1] != x:
//                 b.append(x)

//         m = len(b)
//         s = set()
//         ans = 1
//         id = 0

//         for i in range(m):
//             if b[i] == a[id]:
//                 s.add(a[id])
//                 id += 1
//             else:
//                 if b[i] not in s:
//                     ans = 0
//                     break

//         if ans:
//             print("YA")
//         else:
//             print("TIDAK")

// if __name__ == "__main__":
//     main()



// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int, int>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define YES_NO(x) ((x) ? cout << "YA\n" : cout << "TIDAK\n")
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// using namespace std;

// const int N = 1e5 + 5;
// int a[N], c[N];

// int main() {
//     fastread();
//     int t;
//     cin >> t;
//     auto solve = [&](int n, vector<int>& b) {
//         rep(i, 0, n) {
//             int x; cin >> x;
//             if (b.empty() || b.back() != x) b.push_back(x);
//         }
//     };
    
//     while (t--) {
//         int n, m, q;
//         cin >> n >> m >> q;
//               vll a(n);   rep( i ,0 ,n){cin>>a[i];}
//         vector<int> b;
//         solve(m, b);
        
//         unordered_set<int> s;
//         int id = 0;
//         bool check = true;
        
//         auto func = [&](int cl) {
//             if (cl == a[id]) {  s.insert(a[id++]);
//             } else if (!s.count(cl)) { check = false;
//             }
//         };
        
//         for_each(all(b), func);
//         YES_NO(check);
//     }
    
//     return 0;
// }
