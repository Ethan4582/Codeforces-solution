



#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[1000001];
void solve()
{
    string s;
    cin >> s;
    int res1 = 0;
    int res2 = 1;

    int b = 0;

    for(int i=0;i<s.length();++i)
    {
        if (s[i] == '(')
        {
            ++b;
            a[b] = i + 1;
        }
        else
        {
            --b;
            if (b >= 0)
            {
                int len = i + 1 - a[b];
                if (res1 < len)
                    res1 = len, res2 = 0;
                if (res1 == len)
                    ++res2;
            }
            else
            {
                b = 0;
                a[0] = i + 1;
            }
        }
    }

    cout << res1 << " " << res2 << endl;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}