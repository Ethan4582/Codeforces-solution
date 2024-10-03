#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to compute the required value of 'a' based on 'b', 'c', and 'd'
ll computeA(ll b, ll c, ll d) {
    ll a = 0;
    // Iterate through each bit position
    for(int bit = 0; bit < 64; ++bit){
        // Extract the bit at the current position for b, c, and d
        bool bitB = (b >> bit) & 1;
        bool bitC = (c >> bit) & 1;
        bool bitD = (d >> bit) & 1;
        bool bitA;

        // Determine the value of bitA based on the conditions
        if(!bitB && !bitC){
            bitA = bitD;
        }
        else if(!bitB && bitC){
            if(!bitD){
                bitA = 1;
            }
            else{
                // No valid 'a' exists for this bit
                return -1;
            }
        }
        else if(bitB && !bitC){
            if(!bitD){
                // No valid 'a' exists for this bit
                return -1;
            }
            else{
                bitA = 1;
            }
        }
        else { // bitB && bitC
            bitA = !bitD;
        }

        // Set the bit in 'a' if bitA is true
        if(bitA){
            a |= (1LL << bit);
        }
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int testCases;
    cin >> testCases;
    while(testCases--){
        ll b, c, d;
        cin >> b >> c >> d;
        ll result = computeA(b, c, d);
        cout << result << "\n";
    }
    return 0;
}

