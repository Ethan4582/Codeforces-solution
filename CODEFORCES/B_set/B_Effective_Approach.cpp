#include <iostream>
#include <map>
using namespace std;

#define LL long long

int main() {
    int n;
    cin >> n;

    map<int, int> pos;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        pos[num] = i + 1; 
    }

    int m;
    cin >> m;

    LL sum1 = 0, sum2 = 0;

    for (int i = 0; i < m; ++i) {
        int q;
        cin >> q;
        sum1 += pos[q];            
        sum2 += n - pos[q] + 1;    
    }

    cout << sum1 << " " << sum2 << endl; 

    return 0;
}
