// #include <bits/stdc++.h>
// #define ll long long
// #define vll vector<ll>
// #define vi vector<int>
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n"
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// using namespace std;

// int main() {
//     fastread();
//     int test_cases; 
//     cin >> test_cases; 
//     while (test_cases--) {
//         int num_el, kval; 
//         cin >> num_el >> kval; 
//         vi elements(num_el), x_val(num_el);
        
//         for (auto& elm : elements) cin >> elm;
//         for (auto& x : x_val) cin >> x;
        
//         vll sum(num_el + 1, 0); 
//         rep(i, 0, num_el) {
//             sum[abs(x_val[i])] += elements[i];
//         }

//         bool is_possible = true;
//         ll left_sum = 0;
//         rep(i, 1, num_el + 1) {
//             left_sum += kval - sum[i];
//             is_possible &= (left_sum >= 0);
//         }
        
//        if(is_possible){
//          cout <<"YES"<<endl;
//        }else{
//          cout <<"NO"<<endl;
//        }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
 
// using namespace std;
 
// typedef long long ll;
// typedef long double ld;
// typedef pair <int, int> pii;
 
// #define int ll
 
// #define pb push_back
// #define F first
// #define S second
// #define _sz(x) ((int)x.size())
 
// int t;
 
// const int N = 3e5 + 20;
// int cnt[N];
 
// int32_t main()
// {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
//     cin >> t;
 
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
 
//         vector<int> a;
//         vector<int> x;
 
//         for (int i = 0; i < n; i++) {
//             int val;
//             cin >> val;
//             a.pb(val);
//         }
 
//         for (int i = 0; i < n; i++) {
//             int val;
//             cin >> val;
//             x.pb(val);
//         }
 
//         for (int i = 0; i <= n; i++) cnt[i] = 0;
 
//         for (int i = 0; i < n; i++) {
//             cnt[abs(x[i])] += a[i];
//         }
 
//         int sum = 0;
//         bool bad = false;
//         for (int i = 0; i <= n; i++) {
//             sum += cnt[i];
//             if (sum > i * k) bad = true;
//         }
 
//         cout << (bad? "NO" : "YES") << '\n';
//     }
// }
