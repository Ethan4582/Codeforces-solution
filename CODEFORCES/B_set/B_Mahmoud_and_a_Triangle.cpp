#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lengths(n);
    
    for (int i = 0; i < n; i++) {
        cin >> lengths[i];
    }


    sort(lengths.begin(), lengths.end());


    for (int i = 0; i < n - 2; i++) {
        if (lengths[i] + lengths[i + 1] > lengths[i + 2]) {
            cout << "YES\n";
            return 0; 
        }
    }

    cout << "NO\n";
    return 0;
}
