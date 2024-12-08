#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
const ll MOD1 = 1000000000000000007;
const ll MOD2 = 1000000000000000009;
const ll BASE1 = 911382628;
const ll BASE2 = 3571;

class Solution {
private:
    auto modujlmul() {
        return [](ll a, ll b, ll mod) -> ll {
            ll result = 0;
            a %= mod;
            while (b > 0) {
                if (b & 1) result = (result + a) % mod;
                a = (a * 2) % mod;
                b >>= 1;
            }
            return result;
        };
    }

    auto pwclas(const ll base, const ll mod, const auto& mult) {
        return [=](int maxLen) -> vll {
            vll powers(maxLen, 1);
            generate(next(powers.begin()), powers.end(), 
                [&, prev = 1ll]() mutable {
                    return prev = mult(prev, base, mod);
                });
            return powers;
        };
    }

    auto ascal(const auto& mult) {
        return [=](const vi& child, const vll& powers, const vll& childHashes, 
                  const vi& subtreeLengths, char nodeChar, ll base, ll mod, bool isrev) -> ll {
            ll cmn = 0;
            auto processChild = [&](int child) {
                cmn = (mult(cmn, powers[subtreeLengths[child]], mod) + 
                          childHashes[child]) % mod;
            };

            if (!isrev) {
                for_each(child.begin(), child.end(), processChild);
                cmn = (mult(cmn, base, mod) + (nodeChar - 'a' + 1)) % mod;
            } else {
                cmn = (nodeChar - 'a' + 1);
                for_each(child.rbegin(), child.rend(), processChild);
            }
            return cmn;
        };
    }

public:
    vector<bool> findAnswer(vector<int>& parent_tree, string node_string) {
        int n = parent_tree.size();
        vvi children_tree(n);
        
        for (int i = 1; i < n; ++i) {
            children_tree[parent_tree[i]].push_back(i);
        }

        auto mult = modujlmul();
        auto calculatePowers = pwclas(BASE1, MOD1, mult);
        auto calculatePowers2 = pwclas(BASE2, MOD2, mult);
        auto calculateHash = ascal(mult);

        vll pow1 = calculatePowers(n + 1);
        vll pow2 = calculatePowers2(n + 1);

        vll f_hash1(n), r_hash1(n), f_hash2(n), r_hash2(n);
        vi subtree_len(n, 1), in_degree(n);
        
        transform(children_tree.begin(), children_tree.end(), in_degree.begin(),
                 [](const auto& child) { return child.size(); });

        queue<int> bfs;
        for (int i = 0; i < n; ++i) {
            if (in_degree[i] == 0) bfs.push(i);
        }

        while (!bfs.empty()) {
            int curr = bfs.front(); 
            bfs.pop();

            f_hash1[curr] = calculateHash(children_tree[curr], pow1, f_hash1, subtree_len, 
                                        node_string[curr], BASE1, MOD1, false);
            r_hash1[curr] = calculateHash(children_tree[curr], pow1, r_hash1, subtree_len, 
                                        node_string[curr], BASE1, MOD1, true);
            f_hash2[curr] = calculateHash(children_tree[curr], pow2, f_hash2, subtree_len, 
                                        node_string[curr], BASE2, MOD2, false);
            r_hash2[curr] = calculateHash(children_tree[curr], pow2, r_hash2, subtree_len, 
                                        node_string[curr], BASE2, MOD2, true);

            subtree_len[curr] = accumulate(children_tree[curr].begin(), children_tree[curr].end(), 1,
                [&](int sum, int child) { return sum + subtree_len[child]; });

            if (curr != 0) {
                if (--in_degree[parent_tree[curr]] == 0) {
                    bfs.push(parent_tree[curr]);
                }
            }
        }

        vb result(n);
        for(int i = 0; i < n; ++i) {
            result[i] = (f_hash1[i] == r_hash1[i]) && (f_hash2[i] == r_hash2[i]);
        }

        return result;
    }
};