#include <iostream>
#include <set>
using namespace std;

int main() {
 
    set<int> numbers;
    for (int i = 0; i < 4; ++i) {
        int num;
        cin >> num;
        numbers.insert(num);
    }
    cout << 4-numbers.size()<<endl ; 


    return 0;
}



