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


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;


#define vvi vector<vector<int>>
 
int g[6][6];
 
int main()
{
    int n = 5;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            cin >> g[i][j];
    int p[6], pans[6], ans = -1, tmp;
    for(int i = 0 ; i < n ; ++i)
        p[i] = i;
    
    do
    {
        //01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        //234
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //34
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        if(tmp > ans)
        {
            ans = tmp;
            for(int i = 0 ; i < n ; ++i)
                pans[i] = p[i];
        }
    }
    while(next_permutation(p, p+n));
    
    cout << ans << "\n";
    return 0;
}












#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[6][6];
    long long maxSum, currentSum;
    vector<int> q;

    while (cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[0][3] >> arr[0][4]) {
        maxSum = 0;
        q = {1, 2, 3, 4, 5};

        for (int i = 1; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> arr[i][j];
            }
        }

        do {
            currentSum = 0;
            vector<int> tmp = q;
            
            while (!tmp.empty()) {
                for (int i = 0; i < tmp.size() - 1; i += 2) {
                    int firstIdx = tmp[i] - 1;
                    int secondIdx = tmp[i + 1] - 1;
                    currentSum += arr[firstIdx][secondIdx] + arr[secondIdx][firstIdx];
                }
                tmp.erase(tmp.begin(), tmp.begin() + 1);
            }

            maxSum = max(maxSum, currentSum);

        } while (next_permutation(q.begin(), q.end()));

        cout << maxSum << endl;
    }

    return 0;
}
