#include <iostream>
using namespace std;


int n, m;
char S[1100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        cin >> S;
        for (int j = 0; j < m; j++) { 
            if (S[j] == '.') {
                if ((i + j) % 2 == 0) {
                    S[j] = 'B';
                } else {
                    S[j] = 'W';
                }
            }
            cout << S[j];
        }
        cout << endl; 
    }

    return 0;
}

