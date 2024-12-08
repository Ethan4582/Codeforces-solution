// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int a[N]; 
// bool c[N]; 

// // int solve(){

// // }
// int main() {

	
// 	int n, k;
// 	cin >> n >> k;
// 	vector<int> a(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> a[i];
	
// 	int ans = 0;
// 	while (!a.empty() && a.back() <= k) {
// 		++ans;
// 		a.pop_back();
// 	}
// 	reverse(a.begin(), a.end());
// 	while (!a.empty() && a.back() <= k) {
// 		++ans;
// 		a.pop_back();
// 	}
	
// 	cout << ans << endl;
	
// 	return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int ans = 0;
    int left = 0;             
    int right = n - 1;      
    
    
    while (left <= right) {
        if (a[left] <= k) {
            ans++;            
            left++;          
        } else {
            break;          
        }
    }
    
    while (left <= right) {
        if (a[right] <= k) {
            ans++;           
            right--;         
        } else {
            break;         
        }
    }
    
    cout << ans << endl; 
    return 0;
}