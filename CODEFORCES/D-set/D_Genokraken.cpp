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
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 
using namespace std;

int main() {
    fastread();
    int t; 
    cin >> t; 
    
    while(t--) {
        int n;
        cin >> n;
        
        auto qry = [](int x, int y) __attribute__((always_inline)) {
            cout << "? " << x << " " << y << '\n';
            int r;
            cin >> r;
            return r;
        };
        
        static int c[N], a[N];
        int c_size = 0;
        memset(a, 0, sizeof(a));
        
        bool f = false;
        
        for (register int i = 2; i < n; ++i) {
            if (!f) {
                int x = qry(i, 1);
                
                if (x == -1) break;
                
                c[c_size++] = i;
                
                if (x == 0) {
                    f = true;
                    a[i] = 1;
                }
            } else {
                for (int j = 0; j < c_size; ++j) {
                    int x = c[j];
                    int y = qry(i, x);
                    
                    if (y == 0) {
                        a[i] = x;
                        c[c_size++] = i;
                        break;
                    }
                }
                
                if (c_size > n/2) {
                    c_size = 0;
                }
            }
        }
        
        char out[N * 10];
        int pos = 0;
        out[pos++] = '!';
        out[pos++] = ' ';
        
        for (int i = 1; i < n; ++i) {
            int num = a[i];
            if (num == 0) continue;
            
            int len = 0;
            int temp = num;
            do {
                out[pos + len++] = temp % 10 + '0';
                temp /= 10;
            } while (temp);
            
            for (int k = 0; k < len / 2; ++k) {
                swap(out[pos + k], out[pos + len - 1 - k]);
            }
            
            pos += len;
            out[pos++] = ' ';
        }
        out[pos++] = '\n';
        
        cout.write(out, pos);
    }
    
    return 0;
}