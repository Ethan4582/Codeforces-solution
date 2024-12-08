#include <bits/stdc++.h>


using namespace std;

vector<int> construct(int f, int k) {
    vector<int> result(k);
    for (int i = 0; i < k; ++i) {
        result[i] = (i < f - 1) ? (i + 2) : 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        int ans = 1;
        for (int f = 1; f < k; ++f) {
            vector<int> d = construct(f, k - 1);
            if (accumulate(d.begin(), d.end(), 0) <= n - 1) {
                ans = f;
            }
        }

        vector<int> res = {1};
        vector<int> d = construct(ans, k - 1);
        for (int x : d) {
            res.push_back(res.back() + x);
        }

        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
#include <string>

using namespace std;

string lexicographicallyFirstPalindrome(int n) {
    string palindrome(n, 'a'); // Start with a string of 'a's
    for (int i = 0; i < n / 2; ++i) {
        palindrome[n - 1 - i] = palindrome[i]; // Mirror the first half
    }
    return palindrome;
}

int main() {
    int n;
    cout << "Enter the length of the palindrome: ";
    cin >> n;

    string result = lexicographicallyFirstPalindrome(n);
    cout << "Lexicographically first palindrome of length " << n << ": " << result << endl;

    return 0;
}



// one of the topic 

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int calculateWeight(const string &s, const unordered_map<char, int> &weights) {
    int totalWeight = 0;
    for (char c : s) {
        totalWeight += weights.at(c);
    }
    return totalWeight;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    unordered_map<char, int> weights;
    for (char c = 'a'; c <= 'z'; ++c) {
        weights[c] = c - 'a' + 1; // Assign weights a=1, b=2, ..., z=26
    }

    int maxWeight = 0;
    string maxWeightSubstring;

    for (size_t i = 0; i < str.length(); ++i) {
        for (size_t j = i; j < str.length(); ++j) {
            string substring = str.substr(i, j - i + 1);
            int weight = calculateWeight(substring, weights);
            if (weight > maxWeight) {
                maxWeight = weight;
                maxWeightSubstring = substring;
            }
        }
    }

    cout << "Maximum weighted substring: " << maxWeightSubstring << " with weight: " << maxWeight << endl;

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) return leaders; // Return an empty vector for an empty array

    int max_from_right = arr[n - 1]; // Rightmost element is always a leader
    leaders.push_back(max_from_right);

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > max_from_right) {
            leaders.push_back(arr[i]);
            max_from_right = arr[i]; // Update the maximum
        }
    }

    // Since we added leaders from right to left, reverse the order before returning
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> leaders = findLeaders(arr);
    cout << "Leaders in the array: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, const vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> graph(n);
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    bfs(start, graph);
    cout << endl;

    return 0;
}


<list> 