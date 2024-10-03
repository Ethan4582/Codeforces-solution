// #include <bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define all(v) v.begin(), v.end()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int a[N]; 
// bool c[N]; 

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while(t--) {
//           int n;
//     cin >> n;
//     vector<int> k(n);
    
//     for (int i = 0; i < n; ++i) {
//         cin >> k[i];
//     }

//     int as = n;

//     for (int v : {k[0], k[n - 1]}) {
//         int ren = n;

//         for (int i = 0; i < n; ++i) {
//             if (k[i] == v) {
//                 ren--;
//             } else {
//                 break;
//             }
//         }

//         for (int i = n - 1; i >= 0; --i) {
//             if (k[i] == v) {
//                 ren--;
//             } else {
//                 break;
//             }
//         }

//         as = min(as, ren);
//     }

//     cout << max(0, as) << endl;

//     }
//     return 0;
// }
   // interate throigh the map and then find the the first indx in th map with the occurnace as 1 and the  next elment  with 1 occrance then upadted the anser 
         //  update the as = low_idx_inmap - high_idx_ +1  
         // keep doing and updated the answer untill the map is nocheck   



fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ").map { it.toInt() }
        var m = n

        for (v in listOf(a[0], a[n - 1])) {
            var r = n

            for (i in 0 until n) {
                if (a[i] == v) r--
                else break
            }

            for (i in n - 1 downTo 0) {
                if (a[i] == v) r--
                else break
            }

            m = minOf(m, r)
        }

        println(maxOf(0, m))
    }
}
