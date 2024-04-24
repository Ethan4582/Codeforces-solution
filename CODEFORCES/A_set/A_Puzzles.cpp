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



int main()
{
    ll i,j,k;
    ll n,m;
    ll min=99999999;

    cin>>n>>m;
    ll a[m];

    for(i=0;i<m;i++)
        cin>>a[i];

    sort(a,a+m);
   // the close the number the min the difference 

    for(i=0;i<=(m-n);i++)
    {
        ll temp=a[n+i-1]-a[i];
        if(temp<min)
            min=temp;
    }

    cout<<min;

    return 0;
}



// int main() {
//     int no_of_students, no_of_puzzles;
//     cin >> no_of_students >> no_of_puzzles;

//     vector<int> no_of_pieces(no_of_puzzles);
//     for (int i = 0; i < no_of_puzzles; i++)
//         cin >> no_of_pieces[i];

//     sort(no_of_pieces.begin(), no_of_pieces.end());

//     const int a = 1e9;
//     int minimum_difference = a;
//     for (int i = no_of_students - 1; i < no_of_puzzles; i++) {
//         minimum_difference = min(minimum_difference, no_of_pieces[i] - no_of_pieces[i - (no_of_students - 1)]);
//     }

//     cout << minimum_difference << "\n";
//     return 0;
// }