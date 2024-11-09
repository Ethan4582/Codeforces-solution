#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to compute XOR from 1 to n
ll compute_xor(ll n){
    if(n < 0) return 0;
    ll rem = n % 4;
    if(rem == 0) return n;
    if(rem == 1) return 1;
    if(rem == 2) return n + 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll l, r, i, k;
        cin >> l >> r >> i >> k;
        ll m = 1LL << i;
        // Handle m=0 case if i=0, but since m=1<<0=1 always
        // Find t_start and t_end
        ll t_start, t_end;
        if(l > k){
            // Ceiling division: (l -k +m -1) /m
            t_start = (l - k + m -1) / m;
        }
        else{
            t_start = 0;
        }
        if(r >= k){
            t_end = (r - k) / m;
        }
        else{
            t_end = -1;
        }
        ll XOR_k =0;
        if(t_start <= t_end){
            ll c = t_end - t_start +1;
            // Compute XOR from t_start to t_end
            ll xor_t_end = compute_xor(t_end);
            ll xor_t_start_minus_1 = compute_xor(t_start -1);
            ll xor_t = xor_t_end ^ xor_t_start_minus_1;
            // Shift left by i bits
            xor_t = xor_t << i;
            // If count is odd, XOR with k
            if(c %2 ==1){
                XOR_k = xor_t ^ k;
            }
            else{
                XOR_k = xor_t;
            }
        }
        // Compute XOR_total from l to r
        ll xor_r = compute_xor(r);
        ll xor_l_minus_1 = compute_xor(l -1);
        ll XOR_total = xor_r ^ xor_l_minus_1;
        // XOR_non_k = XOR_total ^ XOR_k
        ll XOR_non_k = XOR_total ^ XOR_k;
        cout << XOR_non_k << "\n";
    }
}
//F - XORificator 3000