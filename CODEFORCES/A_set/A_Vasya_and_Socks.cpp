#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0;
    while (n > 0) {
        days++; 
        n--; 

        if (days % m == 0) {
            n++; 
        }
    }

    cout << days << endl; 
    return 0;
}
///!Solution 


#include <iostream>
using namespace std;
 
int solve(int n, int m)
{
    int s = 0;
    s = n + n/(m - 1);
    if (n%(m - 1) == 0)
        s -= 1;
    return s;
}
 
int main()
{
    int n, m;
    cin >> n >> m;
    cout << solve(n,m) << endl;
    return 0;
}