// // // // // #include <bits/stdc++.h>
// // // // // #define ll long long
// // // // // #define ull unsigned long long
// // // // // #define pb push_back
// // // // // #define vi vector<int>
// // // // // #define vll vector<ll>
// // // // // #define pi pair<int,int> 
// // // // // #define vs vector<string>
// // // // // #define vpii vector<pair<int, int>>
// // // // // #define rep(i, a, n) for (int i = a; i < n; ++i)
// // // // // #define p(a) cout << a << "\n";
// // // // // #define pp(a, b) cout << a << " " << b << "\n";

// // // // // using namespace std;

// // // // // int main() {
// // // // //     ios::sync_with_stdio(0); 
// // // // //     cin.tie(0);
    
// // // // //     int q; 
// // // // //     cin >> q;
    
// // // // //     while (q--) {
// // // // //         int x, y, z; 
// // // // //         cin >> x >> y >> z;
// // // // //         vector<array<int, 2>> v(z);
        
// // // // //         for (auto& e : v) {
// // // // //             cin >> e[0] >> e[1];
// // // // //         }
        
// // // // //         auto f = [&](int s) {
// // // // //             return count_if(v.begin(), v.end(), [&](const auto& p) {
// // // // //                 return max(p[0], s) <= min(p[1], s + y - 1);
// // // // //             });
// // // // //         };
        
// // // // //         auto g = [&]() {
// // // // //             pair<int, int> r(1, 1);
// // // // //             int mx = 0, mn = z + 1;
// // // // //             for (int i = 1; i <= x - y + 1; ++i) {
// // // // //                 int c = f(i);
// // // // //                 if (c > mx) {
// // // // //                     mx = c;
// // // // //                     r.first = i;
// // // // //                 }
// // // // //                 if (c < mn) {
// // // // //                     mn = c;
// // // // //                     r.second = i;
// // // // //                 }
// // // // //             }
// // // // //             return r;
// // // // //         };
        
// // // // //         pair<int, int> es = g();
// // // // //         pp(es.first, es.second);
// // // // //     }
    
// // // // //     return 0;
// // // // // }









// // // // #include <bits/stdc++.h>
// // // // #define ll long long
// // // // #define ull unsigned long long
// // // // #define pb push_back
// // // // #define vi vector<int>
// // // // #define vll vector<ll>
// // // // #define pi pair<int,int> 
// // // // #define vs vector<string>
// // // // #define vpii vector<pair<int, int>>
// // // // #define rep(i, a, n) for (int i = a; i < n; ++i)
// // // // #define p(a) cout << a << "\n";
// // // // #define pp(a, b) cout << a << " " << b << "\n";

// // // // using namespace std;


// // // // struct solev { int s, e; };

// // // // int main() {
// // // //     ios::sync_with_stdio(0); cin.tie(0);
// // // //     int tc; cin >> tc;
    
// // // //     while (tc--) {
// // // //         int n, d, m; cin >> n >> d >> m;
// // // //         vector<solev> checks(m);
// // // //         for (auto& j : checks) cin >> j.s >> j.e;
        
// // // //         auto overlap = [&](int ddo) {
// // // //             return accumulate(checks.begin(), checks.end(), 0, [&](int so, const solev& j) {
// // // //                 return so + (max(j.s, ddo) <= min(j.e, ddo + d - 1));
// // // //             });
// // // //         };
        
// // // //         int besmxa = 0, neminx = m + 1;
// // // //         int dmax = 1, dmixn = 1;
        
// // // //         for (int i = 1; i <= n - d + 1; ++i) {
// // // //             int cur = overlap(i);
// // // //             if (cur > besmxa) besmxa = cur, dmax = i;
// // // //             if (cur < neminx) neminx = cur, dmixn = i;
// // // //         }
        
// // // //         pp(dmax, dmixn);
// // // //     }
// // // // }


// // // // // #include <bits/stdc++.h>
// // // // // #define ll long long
// // // // // #define ull unsigned long long
// // // // // #define pb push_back
// // // // // #define vi vector<int>
// // // // // #define vll vector<ll>
// // // // // #define pi pair<int,int> 
// // // // // #define vs vector<string>
// // // // // #define vpii vector<pair<int, int>>
// // // // // #define rep(i, a, n) for (int i = a; i < n; ++i)
// // // // // #define p(a) cout << a << "\n";
// // // // // #define pp(a, b) cout << a << " " << b << "\n";

// // // // // using namespace std;

// // // // // int main() {
// // // // //     ios::sync_with_stdio(0); 
// // // // //     cin.tie(0);
    
// // // // //     int q; 
// // // // //     cin >> q;
    
// // // // //     while (q--) {
// // // // //         int x, y, z; 
// // // // //         cin >> x >> y >> z;
// // // // //         vector<array<int, 2>> v(z);
        
// // // // //         for (auto& e : v) {
// // // // //             cin >> e[0] >> e[1];
// // // // //         }
        
// // // // //         // Create an array to count overlaps
// // // // //         vector<int> overlap_count(x + 1, 0);
        
// // // // //         // Mark the start and end of each interval
// // // // //         for (const auto& p : v) {
// // // // //             overlap_count[max(1, p[0])]++; // Start of the interval
// // // // //             if (p[1] + 1 <= x) {
// // // // //                 overlap_count[p[1] + 1]--; // End of the interval
// // // // //             }
// // // // //         }
        
// // // // //         // Calculate the prefix sum to get the number of overlaps at each position
// // // // //         for (int i = 1; i <= x; ++i) {
// // // // //             overlap_count[i] += overlap_count[i - 1];
// // // // //         }
        
// // // // //         // Now find the maximum and minimum overlaps in the range
// // // // //         pair<int, int> r(1, 1);
// // // // //         int mx = 0, mn = z + 1;
        
// // // // //         for (int i = 1; i <= x - y + 1; ++i) {
// // // // //             int c = 0;
// // // // //             for (int j = i; j < i + y; ++j) {
// // // // //                 c += overlap_count[j];
// // // // //             }
// // // // //             if (c > mx) {
// // // // //                 mx = c;
// // // // //                 r.first = i;
// // // // //             }
// // // // //             if (c < mn) {
// // // // //                 mn = c;
// // // // //                 r.second = i;
// // // // //             }
// // // // //         }
        
// // // // //         pp(r.first, r.second);
// // // // //     }
    
// // // // //     return 0;
// // // // // }




// // // #include <bits/stdc++.h>
// // // #define ll long long
// // // #define ull unsigned long long
// // // #define pb push_back
// // // #define vi vector<int>
// // // #define vll vector<ll>
// // // #define pi pair<int,int>
// // // #define vs vector<string>
// // // #define vpii vector<pair<int, int>>
// // // #define rep(i, a, n) for (int i = a; i < n; ++i)
// // // #define p(a) cout << a << "\n";
// // // #define pp(a, b) cout << a << " " << b << "\n";

// // // using namespace std;

// // // vector<array<int, 2>> v;

// // // int calc_overlap(int s, int y) {
// // //     return count_if(v.begin(), v.end(), [&](const auto& p) {
// // //         return max(p[0], s) <= min(p[1], s + y - 1);
// // //     });
// // // }

// // // void findBestBrotherAndMother(int n, int d, int k, int& best_brother, int& best_mother) {
// // //     int max_overlap = 0;
// // //     int min_overlap = k + 1;

// // //     // Using a single loop with a vector to store overlaps
// // //     vector<int> overlaps(n - d + 2, 0); // Store overlaps for each position

// // //     for (const auto& p : v) {
// // //         for (int i = max(1, p[0]); i <= min(n - d + 1, p[1] - d + 1); i++) {
// // //             overlaps[i]++;
// // //         }
// // //     }

// // //     // Now find the best brother and mother based on the overlaps
// // //     for (int i = 1; i <= n - d + 1; i++) {
// // //         if (overlaps[i] > max_overlap) {
// // //             max_overlap = overlaps[i];
// // //             best_brother = i;
// // //         }
// // //         if (overlaps[i] < min_overlap) {
// // //             min_overlap = overlaps[i];
// // //             best_mother = i;
// // //         }
// // //     }
// // // }

// // // int main() {
// // //     ios::sync_with_stdio(0);
// // //     cin.tie(0);
    
// // //     int q; 
// // //     cin >> q;

// // //     while (q--) {
// // //         int x, y, z; 
// // //         cin >> x >> y >> z;
// // //         v.resize(z);
        
// // //         for (auto& e : v) {
// // //             cin >> e[0] >> e[1];
// // //         }

// // //         int best_brother = 1, best_mother = 1;
// // //         findBestBrotherAndMother(x, y, z, best_brother, best_mother);

// // //         pp(best_brother, best_mother);
// // //     }
    
// // //     return 0;
// // // }



// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long

// // int32_t main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int n, d, k;
// //         cin >> n >> d >> k;

// //         map<int, int> start, end;
// //         while (k--) {
// //             int l, r;
// //             cin >> l >> r;
// //             start[l]++;
// //             end[r]++;
// //         }

// //         int maxBro = 0, minMom = LLONG_MAX, broIdx = 1, momIdx = 1;
// //         int crn = 0;

// //         // Initialize current overlaps for the first segment
// //         for (int i = 1; i <= d; i++) {
// //             crn += start[i];
// //         }
// //         maxBro = minMom = crn;

// //         auto pcb = [&](int i) {
// //             if (start.find(i + d - 1) != start.end()) {
// //                 crn += start[i + d - 1];
// //             }
// //             if (end.find(i - 1) != end.end()) {
// //                 crn -= end[i - 1];
// //             }
// //         };

// //         for (int i = 2; i <= n - d + 1; i++) {
// //             pcb(i);

// //             if (crn > maxBro) {
// //                 maxBro = crn;
// //                 broIdx = i;
// //             }
// //             if (crn < minMom) {
// //                 minMom = crn;
// //                 momIdx = i;
// //             }
// //         }

// //         cout << broIdx << " " << momIdx << endl;
// //     }
// // }


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define p2(a, b) cout<< a<< " " << b << endl;

// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, d, k;
//         cin >> n >> d >> k;

//         map<int, int> s, e;
//         while (k--) {
//             int l, r;
//             cin >> l >> r;
//             s[l]++;
//             e[r]++;
//         }

//         int maxB = 0, minM = LLONG_MAX, bIdx = 1, mIdx = 1, curC = 0;

       
//         for (int i = 1; i <= d; i++) {
//             curC += s[i];
//         }
//         maxB = minM = curC;

//         auto updateC = [&](int i) {
//             curC += s[i + d - 1]; 
//             curC -= e[i - 1];
//         };

//         for (int i = 2; i <= n - d + 1; i++) {
//             updateC(i);

//             if (curC > maxB) {maxB = curC; bIdx = i;}if (curC < minM) {minM = curC; mIdx = i;
//             }
            
//         }

//         p2(bIdx, mIdx);
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define p2(a, b) cout << a << " " << b << endl;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;

        vector<int> start(n + 1, 0), end(n + 1, 0);
        while (k--) {
            int l, r;
            cin >> l >> r;
            start[l]++;
            end[r]++;
        }

        int maxB = 0, minM = LLONG_MAX, bIdx = 1, mIdx = 1, curC = 0;

       
        for (int i = 1; i <= d; i++) {
            curC += start[i];
        }
        maxB = minM = curC;

        auto updateC = [&](int i) {
            curC += start[i + d - 1]; 
            curC -= end[i - 1];
        };

        for (int i = 2; i <= n - d + 1; i++) {
            updateC(i);

            if (curC > maxB) { maxB = curC; bIdx = i; }
            if (curC < minM) { minM = curC; mIdx = i; }
        }

        p2(bIdx, mIdx);
    }
}