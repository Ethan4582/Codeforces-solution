#include <bits/stdc++.h> // This includes all standard libraries in C++
using namespace std;

typedef long long int ll; // Defining a shorthand for long long int as ll
set<ll> s; // Declaring a set to store unique elements

ll a[100005]; // Declaring an array to store input elements

int main() {
    ll n, k;
    cin >> n >> k; // Taking input for n (number of elements) and k (divisor)

    // Loop to take input of elements and store them in array 'a'
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        a[i] = x;
    }

    sort(a + 1, a + n + 1); // Sorting the array in non-decreasing order

    // Loop to iterate through each element in the array 'a'
    for (int i = 1; i <= n; i++) {
        ll x = a[i]; // Current element

        // If the element is not divisible by k, insert it into the set
        if (x % k != 0)
            s.insert(x);
        else {
            // If the element is divisible by k, check if the quotient is not in the set
            if (s.count(x / k) == 0) {
                s.insert(x); // Insert the element into the set
            }
        }
    }

    cout << s.size() << endl; // Output the size of the set (number of unique elements)
    return 0;
}
