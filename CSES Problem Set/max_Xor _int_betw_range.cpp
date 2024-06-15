#include <bits/stdc++.h>
using namespace std;

int findMaximumXOR(int l, int r) {
    int msbPos = 0;
    int xorResult = l ^ r;
    
    // Find the most significant bit position in the XOR result
    while (xorResult) {
        msbPos++;
        xorResult >>= 1;
    }
    
    // Calculate the maximum XOR value by setting all bits from msbPos to 0
    int maxXOR = (1 << msbPos) - 1;
    
    return maxXOR;
}

int main() {
    int l, r;
    cin >> l >> r;
    
    int max_XOR = findMaximumXOR(l, r);
    
    cout << max_XOR << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r, x, mx = 0;
    cin >> l >> r;
    
    for (int i = l; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) { // Changed l+1 to i+1
            x = i ^ j;
            mx = max(mx, x); // Changed max to mx
        }
    }
    
    cout << mx << endl;

    return 0;
}
