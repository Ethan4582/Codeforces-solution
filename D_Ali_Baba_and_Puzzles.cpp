//D. Ali Baba and Puzzles
#include <iostream>
using namespace std;

int main ()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;
    ((a+b*c)==d || (a+b-c)==d || (a*b-c)==d || (a*b+c)==d || (a-b*c)==d || (a-b+c)==d )? cout << "YES": cout << "NO";

    return 0;
}