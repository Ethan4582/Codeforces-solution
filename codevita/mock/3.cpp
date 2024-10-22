// #include <bits/stdc++.h>
// using namespace std;

// #define fr(i, k, n) for (std::string::size_type i = k; i < n; i++)
// #define pb push_back
// #define F first
// #define S second
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<string>  vs;
// typedef pair<int, int> pii;

// bool chkwrd(string wrd) {
//     vs nms = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     string tmp = "";
//     for (auto ch : wrd) {
//         if (ch == 'c') {
//             if (find(nms.begin(), nms.end(), tmp) == nms.end()) return false;
//             tmp = "";
//         } else {
//             tmp += ch;
//         }
//     }
//     return tmp == "" || find(nms.begin(), nms.end(), tmp) != nms.end();
// }

// int gevl(string s) {
//     vs nms = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     string tmp = "";
//     int ans = 0;

//     for (std::string::size_type i = 0; i < s.size(); i++) {
//         if (s[i] == 'c') {
//             for (std::string::size_type j = 0; j < nms.size(); j++) {
//                 if (nms[j] == tmp) ans = ans * 10 + j;
//             }
//             tmp = "";
//         } else {
//             tmp += s[i];
//         }
//     }
//     if (tmp.size()) {
//         for (std::string::size_type j = 0; j < nms.size(); j++) {
//             if (nms[j] == tmp) ans = ans * 10 + j;
//         }
//     }
//     return ans;
// }

// int calc(int x, int y, string oprd) {
//     if (oprd == "add") return x + y;
//     if (oprd == "sub") return x - y;
//     if (oprd == "mul") return x * y;
//     if (oprd == "rem") return x % y;
//     return pow(x, y);
// }

// void solve() {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     queue<string> q;
//     string tmp;
//     while (ss >> tmp) q.push(tmp);

//      ops = {"add", "sub", "mul", "rem", "pow"};
//     while (!q.empty()) {
//         string curr = q.front();
//         if (find(ops.begin(), ops.end(), curr) == ops.end() && !chkwrd(curr)) {
//             cout << "expression evaluation stopped invalid words present";
//             return;
//         }
//         q.pop();
//     }

//     stringstream ss2(s);
//     deque<string> expr;
//     while (ss2 >> tmp) expr.pb(tmp);

//     try {
//         stack<int> vls;
//         vector<string> oprd;
//         while (!expr.empty()) {
//             string curr = expr.front();
//             expr.pop_front();
//             if (find(ops.begin(), ops.end(), curr) != ops.end()) {
//                 oprd.pb(curr);
//             } else {
//                 vls.push(gevl(curr));
//                 if (vls.size() >= 2 && oprd.size()) {
//                     int b = vls.top(); vls.pop();
//                     int a = vls.top(); vls.pop();
//                     vls.push(calc(a, b, oprd.back()));
//                     oprd.pop_back();
//                 }
//             }
//         }
//         if (vls.size() == 1 && oprd.empty()) cout << vls.top();
//         else cout << "expression is not complete or invalid";
//     } catch (...) {
//         cout << "expression is not complete or invalid";
//     }
// }

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     solve();
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

bool validNum(string s) {
    vector<string> nums = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string temp = "";
    for(char c : s) {
        if(c == 'c') {
            if(find(nums.begin(), nums.end(), temp) == nums.end()) return false;
            temp = "";
        } else temp += c;
    }
    return temp.empty() || find(nums.begin(), nums.end(), temp) != nums.end();
}

int convert(string s) {
    vector<string> nums = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string temp = "";
    int val = 0;
    for(char c : s) {
        if(c == 'c') {
            for(int i = 0; i < 10; i++) {
                if(nums[i] == temp) {
                    val = val * 10 + i;
                    break;
                }
            }
            temp = "";
        } else temp += c;
    }
    if(!temp.empty()) {
        for(int i = 0; i < 10; i++) {
            if(nums[i] == temp) {
                val = val * 10 + i;
                break;
            }
        }
    }
    return val;
}

int evaluate(vector<string>& tokens, int& pos) {
    vector<string> ops = {"add", "sub", "mul", "rem", "pow"};
    if(pos < 0) return 0;
    
    if(find(ops.begin(), ops.end(), tokens[pos]) == ops.end()) {
        return convert(tokens[pos--]);
    }
    
    string op = tokens[pos--];
    int b = evaluate(tokens, pos);
    int a = evaluate(tokens, pos);
    
    if(op == "add") return a + b;
    if(op == "sub") return a - b;
    if(op == "mul") return a * b;
    if(op == "rem") return a % b;
    return pow(a, b);
}

void solve() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> tokens;
    string word;
    
    while(ss >> word) tokens.push_back(word);
    
    vector<string> ops = {"add", "sub", "mul", "rem", "pow"};
    for(string& w : tokens) {
        if(find(ops.begin(), ops.end(), w) == ops.end() && !validNum(w)) {
            cout << "expression evaluation stopped invalid words present";
            return;
        }
    }
    
    try {
        int pos = tokens.size() - 1;
        int result = evaluate(tokens, pos);
        if(pos == -1) cout << result;
        else cout << "expression is not complete or invalid";
    } catch(...) {
        cout << "expression is not complete or invalid";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}