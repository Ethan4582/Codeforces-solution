#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long digits = 0;
    long long range_start = 1;
    int range_length = 1;
    
    while (range_start <= n) {
        long long range_end = range_start * 10 - 1;
        if (range_end > n) {
            range_end = n;
        }
        digits += (range_end - range_start + 1) * range_length;
        range_start *= 10;
        range_length++;
    }
    
    cout << digits << endl;
    return 0;
}
