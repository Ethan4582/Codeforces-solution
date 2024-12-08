#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000;


vector<int> generateSequence() {
    vector<int> sequence;
    int num = 1;
    while (sequence.size() < MAX_N) {
        if (num % 3 != 0 && num % 10 != 3) {
            sequence.push_back(num);
        }
        num++;
    }
    return sequence;
}

int main() {
   
    vector<int> sequence = generateSequence();

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        cout << sequence[k - 1] << endl; 
    }

    return 0;
}
