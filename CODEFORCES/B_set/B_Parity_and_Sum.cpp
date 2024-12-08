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


// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for (ll &x : a) cin >> x;

//     ll largest_odd = LLONG_MIN; 
//     ll largest_even = LLONG_MIN;

//     for (const ll &x : a) {
//         if (x % 2 == 1) {
//             largest_odd = max(largest_odd, x);
//         } else {
//             largest_even = max(largest_even, x);
//         }
//     }

//     bool all_same_parity = true;
//     for (int i = 1; i < n; i++) {
//         if (a[i] % 2 != a[0] % 2) {
//             all_same_parity = false;
//             break;
//         }
//     }

//     if (all_same_parity) {
//         cout << 0 << "\n";
//         return;
//     }

//     sort(a.begin(), a.end());
//     int count = 0;

//     for (ll &x : a) {
//         if (x % 2 == 0 && x < largest_odd) {
//             count++;
//             x += largest_odd; 
//             largest_odd = max(largest_odd, x); 
//         }
//     }

   
//     all_same_parity = true;
//     for (int i = 1; i < n; i++) {
//         if (a[i] % 2 != a[0] % 2) {
//             all_same_parity = false;
//             break;
//         }
//     }

//     if (all_same_parity) {
//         cout << count << "\n";
//         return;
//     }

  
//     ll index = find(a.begin(), a.end(), largest_odd) - a.begin();
//     a[index] += largest_even; 
//     count++;

//     count += count_if(a.begin(), a.end(), [](ll x) { return x % 2 == 0; });

//     cout << count << "\n";
// }

// int main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

//----> need to convert all ood parity min = (no_of evenelment  ,  no_of evenelment+ 1)


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

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for (auto &it : v) cin >> it;
//     int cnt1 = 0;
//     for (auto it : v) if (it & 1) cnt1++;
//     if (cnt1 == 0 || cnt1 == n) {
//         cout << 0 << endl;
//         return;
//     }

//     vector<ll> v1, evenNUM;
//     for (auto it : v) {
//         if (it & 1) v1.push_back(it);
//         else evenNUM.push_back(it);
//     }
//     sort(all(evenNUM));
//     sort(all(v1));
//     ll temp = v1.back();
//     ll ans = 0;

//     for (auto it : evenNUM) {
//         if (temp < it) {
//             ans += 2;
//             temp = (it * 2) + temp;
//         } else {
//             ans++;
//             temp = it + temp;
//         }
//     }
//     ll ans1 = 0;
//     reverse(all(evenNUM));
//     temp = v1.back();
//     for (auto it : evenNUM) {
//         if (temp < it) {
//             ans1 += 2;
//             temp = (it * 2) + temp;
//         } else {
//             ans1++;
//             temp = it + temp;
//         }
//     }
//     cout << min(ans, ans1) << endl;
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &it : v) cin >> it;
        int cnt1 = 0;
        for (auto it : v) if (it & 1) cnt1++;
        if (cnt1 == 0 || cnt1 == n) {
            cout << 0 << endl;
            continue;
        }

        vector<ll> v1, evenNUM;
        for (auto it : v) {
            if (it & 1) v1.push_back(it);
            else evenNUM.push_back(it);
        }
        sort(all(evenNUM));
        sort(all(v1));
        ll greatest_odd = v1.back();
        ll ans = evenNUM.size();
        rep( i , 0 , evenNUM.size()){
          if(evenNUM[i]<greatest_odd){
            greatest_odd+=evenNUM[i];
          }
          else{
            ans++;
            break;
          }
        }
        p(ans);
    }
    return 0;
}




void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
