// keep the track of smaller claues in the array it postion in case not hen jus to 0 





#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main() {
    fastread();
   
    int n; 
    cin >> n; 
    vector<int> a(n);
    rep(i, 0, n) { cin >> a[i]; }

    stack < int > s; 

    stack<int> s;
    s.push(-1); // Initialize stack with -1

    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
        while (s.top() != -1 && a[s.top()] >= a[i]) {
            s.pop();
        }
        ans[i] = (s.top() == -1) ? 0 : s.top() + 1;
        s.push(i);
    }

    for (auto it : ans) {
        cout << it << " ";
    }
   
    return 0;
}



int main() {
    fastread();
   
    int n; 
    cin >> n; 
    vector<int> a(n);
    rep(i, 0, n) { cin >> a[i]; }

    // ... existing code ...

    stack<int> s;
    vector<int> nge(n, -1); // Initialize with -1 (no greater element)

    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[s.top()] < a[i]) {
            nge[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }

    for (auto it : nge) {
        cout << it << " ";
    }
   
    return 0;
}