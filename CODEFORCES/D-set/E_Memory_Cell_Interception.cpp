#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    fastread();
    int qn;
    if (!(cin >> qn)) return 0;

    auto w2 = [&]() {
        int l1, l2;
        cin >> l1 >> l2;
        string sa, sb;
        cin >> sa >> sb;

        auto pos2 = [](const string &str) {
            vi arr;
            int len = str.size();
            rep(j, 0, len) {
                if (str[j] == 'W') arr.pb(j + 1);
            }
            return arr;
        };


        auto prf2 = [](const vi &arr) {
            int k = arr.size();
            vll dif;
            rep(j, 0, k - 1) {
                dif.pb(arr[j + 1] - arr[j]);
            }
            sort(all(dif));
            int sz = dif.size();
            vll pr(sz + 1, 0);
            rep(j, 0, sz) {
                pr[j + 1] = pr[j] + dif[j];
            }
            return make_pair(dif, pr);
        };

        auto proc = [&](const string &u, const string &w) -> vll {
            int n1 = u.size(), n_w = w.size();
            vi v3 = pos2(w);
            int n3 = v3.size();
            
            auto prr = prf2(v3);
            vll d_v = prr.first;
            vll pr_v = prr.second;
            int num_d = d_v.size();

            vll out;
            int cur_l = 0;
            rep(i, 0, n1) {
                if (u[i] == 'W') {
                    cur_l = i + 1;
                } else {
                    ll p_i = i + 1;
                    if (cur_l == 0) {
                        if (n3 == 0) {
                            out.pb(1);
                        } else {

                            int loc = upper_bound(all(d_v), p_i) - d_v.begin();

                            ll acc = pr_v[loc] + (ll)(num_d - loc) * p_i;
                            out.pb(1 + p_i + acc);


                        }
                    } else {
                        if (n3 == 0) {
                            out.pb(n_w + 1);
                            //
                        } else {
                            ll val = max((ll)n_w, (ll)v3.back() + p_i - cur_l - 1);
                            out.pb(val + 1);
                        }
                    }
                }
            }
            return out;
        };


        vll rs1 = proc(sa, sb);
        vll rs2 = proc(sb, sa);

        auto check = [](const vll &vec) {
            int len = vec.size();
            rep(i, 0, len) {
                cout << vec[i] << (i + 1 == len ? "" : " ");
            }
            cout << "\n";
        };

        check(rs1);
        check(rs2);
    };

    while (qn--) {
        w2();
    }
    return 0;
}