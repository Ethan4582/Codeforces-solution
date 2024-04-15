#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    
    vector<int> marks(d + 1, 0);

    for (int i = k; i <= d; i += k) marks[i] = 1;
    for (int i = l; i <= d; i += l) marks[i] = 1;
    for (int i = m; i <= d; i += m) marks[i] = 1;
    for (int i = n; i <= d; i += n) marks[i] = 1;


    int unmarked_count = 0;
    for (int i = 1; i <= d; ++i) {
        if (marks[i] == 0) unmarked_count++;
    }

    cout << d- unmarked_count << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int unmarked_count = d;

   
    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            unmarked_count--;
        }
    }

    cout <<d- unmarked_count << endl;

    return 0;
}