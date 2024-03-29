// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
// using namespace std;

// int main() {
//     fastread();
//     int n, k;
//     string s;
//     cin >> s >> k;
//     n = s.size();
//     int len = n / k;
//     for (int i = 0; i < n; ++i) {
//         if (n % k || s[i] != s[(i / len) * len + len - 1 - (i % len)]) {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     int n;
//     cin >> s >> n;

//     if (s.length() % n > 0)
//     {
//         cout << "NO" << endl;
//         return 0;
//     }

//     int l = s.length() / n;
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < l / 2; j++)
//             if (s[j + i * l] != s[(i + 1) * l - j - 1])
//             {
//                 cout << "NO" << endl;
//                 return 0;
//             }

//     cout << "YES" << endl;
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define rep(i, a, n) for (int i = a; i < n; i++)
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

using namespace std;
int main()
{
    fastread();
    string s;
    int n;
    cin >> s >> n;
    int k = s.size();

    if (k % n != 0)
    {
        cout << "NO\n";
        return 0;
    }

    int len = k / n;
    for (int i = 0; i < k; i += len)
    {
        string substr = s.substr(i, len);
        if (substr != string(substr.rbegin(), substr.rend()))
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}
