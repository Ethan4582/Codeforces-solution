// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x; 

//     int currentPosition = 0; 
//     int steps = 0; 

//     while (currentPosition < x) {
//         if (currentPosition + 5 <= x) {
//             currentPosition += 5;
//         } else if (currentPosition + 4 <= x) {
//             currentPosition += 4;
//         } else if (currentPosition + 3 <= x) {
//             currentPosition += 3;
//         } else if (currentPosition + 2 <= x) {
//             currentPosition += 2;
//         } else {
//             currentPosition += 1;
//         }
//         steps++; 
//     }

//     cout << steps << endl; 
//     return 0;
// }





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
int main()
{
    fastread();
    int n ;
    cin>>n ;
    
    cout <<(n+4)/5 ;
    return 0;


}


