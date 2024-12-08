 #include<bits/stdc++.h>
using namespace std;
#define ll long long
ll findSum(string &s){
    ll c=0;
    for(auto &d:s)
    c+=(d-'0');
    return c;
}
 
 
ll findPairs(vector<string> &v){
    vector<vector<ll>> dp(11,vector<ll>(60,0));
    ll ans = 0;
    ll n=v.size();
    
     for(int i=0;i<n;i++){
        string &s = v[i];
        ll sum = findSum(s);
        ll len = s.size();
         dp[len][sum]++;
     }
    
    
    for(int i=0;i<n;i++){
        string s=v[i];
        ll sum = findSum(v[i]);
        ll len = s.size();
        
        ans+= dp[len][sum];
        
       
        ll removedSum = 0, r=0;
        for(ll i=len-1;i>0;i--){
            removedSum+=(s[i] - '0');
            r++;
            
            ll left = len-r;
            ll leftSum = sum - removedSum ;
            
            ll remainingRight = left - r;
            ll remainingRightSum = leftSum - removedSum;
            
            if(remainingRight>=0 && remainingRightSum>=0  && ((left + remainingRight + r)%2==0))
            ans+= dp[remainingRight][remainingRightSum];
        }
        
    
        removedSum = 0, r=0;
        for(int i=0;i<len-1;i++){
            removedSum+=(s[i] - '0');
            r++;
            
            ll right = len-r;
            ll rightSum = sum - removedSum;
            
            ll remainingLeft = right - r;
            ll remainingLeftSum = rightSum - removedSum;
            
            if(remainingLeftSum>=0 && remainingLeft >=0 && ((right + remainingLeft + r)%2==0))
            ans+= dp[remainingLeft][remainingLeftSum];
        }
 
        
    }
   
    return ans;
}
 
 
void solve(){
    ll n;
    cin>>n;
    vector<string> v(n);
 
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    
    ll ans = findPairs(v);
    
    
    cout<<ans<<"\n";
    
}
 
int main(){
    
    ll t=1;
    
    while(t--)
    solve();
    
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<string> s(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> s[i];
//     }

//     int ans = 0;
//     vector<vector<int>> cnt(6, vector<int>(46, 0));

//     for (string& y : s) {
//         cnt[y.length()][accumulate(y.begin(), y.end(), 0, [](int a, char c) { return a + (c - '0'); })]++;
//     }

//     for (string& L : s) {
//         for (int lenr = L.length() % 2; lenr <= L.length(); lenr += 2) {
//             int l = L.length() + lenr;
//             int suml = accumulate(L.begin(), L.begin() + l / 2, 0, [](int a, char c) { return a + (c - '0'); });
//             int sumr = accumulate(L.begin() + l / 2, L.end(), 0, [](int a, char c) { return a + (c - '0'); });
//             if (suml - sumr >= 0) {
//                 ans += cnt[lenr][suml - sumr];
//             }
//         }
//     }

//     for (string& R : s) {
//         for (int lenl = R.length() % 2; lenl < R.length(); lenl += 2) {
//             int l = R.length() + lenl;
//             int suml = accumulate(R.begin() + l / 2, R.end(), 0, [](int a, char c) { return a + (c - '0'); });
//             int sumr = accumulate(R.begin(), R.begin() + l / 2, 0, [](int a, char c) { return a + (c - '0'); });
//             if (suml - sumr >= 0) {
//                 ans += cnt[lenl][suml - sumr];
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }
