



// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define vml vector<Matrix>
// #define pi pair<int,int> 
// #define f first
// #define s second
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define p2(a, b) cout << a << " " << b << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// const ll mod = 1e9 + 7;

// int GCD(int a, int b) {return b == 0 ? a : GCD(b, a % b);}

// int power(int x, int y, int MOD) {if (y == 0) {return 1;}if (y % 2 == 0) {return power((x * x) % MOD, y / 2, MOD) % MOD;} else {return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;}}

// int combinations(int x, int y) { if (x == 0) return 0;  if (y == 0) return 1; return combinations(x-1, y-1) + combinations(x-1, y);}


// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
// #define SIEVE seive(); 

// const int N = 1000000; 
// int prime[N];

// using namespace std;

// template<typename T>
// class CircularQueue {
//     vector<T> data;
//     int front, rear, size;
// public:
//     CircularQueue(int capacity) : data(capacity), front(0), rear(0), size(0) {}
    
//     void push(const T& value) {
//         data[rear] = value;
//         rear = (rear + 1) % data.size();
//         size++;
//     }
    
//     T pop() {
//         T value = data[front];
//         front = (front + 1) % data.size();
//         size--;
//         return value;
//     }
    
//     bool empty() const { return size == 0; }
// };

// class matixprcers {
//     enum class InputState { ROW_START, ELEMENT_READ, ROW_END };
//     enum class OutputState { MATRIX_START, ROW_PRINT, ELEMENT_PRINT, ROW_END };
    
//     struct Matrix {
//         vector<vi> data;
//         Matrix(int r, int c) : data(r, vi(c)) {}
//     };
    
//     vml mtrxes;
//     CircularQueue<int> elmbuffer;
//     int rmws, clms, numatx;
    
//     class StateController {
//         using StateFunction = function<void(void)>;
//         unordered_map<string, StateFunction> states;
//         string currentState;
        
//     public:
//         void addState(const string& name, StateFunction func) {
//             states[name] = func;
//         }
        
//         void setState(const string& name) {
//             currentState = name;
//         }
        
//         void execute() {
//             while (states.count(currentState)) {
//                 states[currentState]();
//             }
//         }
//     };
    
//     void imdata() {
//         elmbuffer = CircularQueue<int>(rmws * clms * numatx);
        
//         auto impment = [&]() {
//             for (int val, count = 0; count < rmws * clms * numatx; ++count) {
//                 cin >> val;
//                 elmbuffer.push(val);
//             }
//         };
        
//         auto ssielm = [&]() {
//             for (int r = 0; r < rmws; ++r) {
//                 for (int m = 0; m < numatx; ++m) {
//                     for (int c = 0; c < clms; ++c) {
//                         mtrxes[m].data[r][c] = elmbuffer.pop();
//                     }
//                 }
//             }
//         };
        
//         impment();
//         ssielm();
//     }
    
//     class otfprmater {
//         const vml& mtrxes;
//         const vi& seqn;
//         int rmws, clms;
//         stringstream output;
        
//         void formatRow(int mwso) {
//             for (size_t i = 0; i < seqn.size(); ++i) {
//                 int trxidx = seqn[i];
//                 for (int c = 0; c < clms; ++c) {
//                     output << mtrxes[trxidx].data[mwso][c];
//                     if (c < clms - 1 || i < seqn.size() - 1) output << " ";
//                 }
//             }
//             output << "\n";
//         }
        
//     public:
//         otfprmater(const vml& m, const vi& s, int r, int c)
//             : mtrxes(m), seqn(s), rmws(r), clms(c) {}
            
//         string format() {
//             for (int r = 0; r < rmws; ++r) {
//                 formatRow(r);
//             }
//             return output.str();
//         }
//     };
    
// public:
//     matixprcers(int n, int r, int c) 
//         : rmws(r), clms(c), numatx(n), elmbuffer(r * c * n) {
//         mtrxes.reserve(n);
//         for (int i = 0; i < n; ++i) {
//             mtrxes.emplace_back(r, c);
//         }
//     }
    
//     void pinpt() {
//         imdata();
//     }
    
//     void processInstructions() {
//         string lne;
//         cin.ignore();
        
//         while (getline(cin, lne) && !lne.empty()) {
//             istringstream iss(lne);
//             vi inst;
            
//             auto prcinst = [&]() {
//                 int x;
//                 while (iss >> x) {
//                     inst.push_back(x - 1);
//                 }
//             };
            
//             prcinst();
            
//             otfprmater frmtter(mtrxes, inst, rmws, clms);
//             cout << frmtter.format();
//         }
//     }
// };

// int main() {
//     fastread();
//     int n, r, c;
//     cin >> n >> r >> c;
//     matixprcers processor(n, r, c);
//     processor.pinpt();
//     processor.processInstructions();
//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

class MatrixHandler {
private:
    vector<vector<vector<int>>> matrices;
    int rows, cols;

public:
    MatrixHandler(int n, int r, int c) : rows(r), cols(c) {
        matrices.resize(n, vector<vector<int>>(r, vector<int>(c)));
    }

    void inputMatrices() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < matrices.size(); ++j) {
                for (int k = 0; k < cols; ++k) {
                    cin >> matrices[j][i][k];
                }
            }
        }
    }

    void processInstructions() {
        string line;
        cin.ignore();
        auto printRow = [&](const vector<int>& indices) {
            for (int i = 0; i < rows; ++i) {
                for (size_t idx = 0; idx < indices.size(); ++idx) {
                    for (int k = 0; k < cols; ++k) {
                        cout << matrices[indices[idx]][i][k];
                        if (k < cols - 1 || idx != indices.size() - 1) cout << " ";
                    }
                }
                cout << "\n";
            }
        };

        while (getline(cin, line)) {
            if (line.empty()) break;
            istringstream iss(line);
            vector<int> instructions;
            int x;
            while (iss >> x) {
                instructions.push_back(x - 1);
            }
            printRow(instructions);
        }
    }
};

int main() {
    fastread();
    int n, r, c;
    cin >> n >> r >> c;

    MatrixHandler matrixHandler(n, r, c);
    matrixHandler.inputMatrices();
    matrixHandler.processInstructions();

    return 0;
}







#include <bits/stdc++.h>
using namespace std;

class Line {
private:
    int maxlen;
    int crrlen;
    vector<string> wrd;

public:
    Line(int m) : maxlen(m), crrlen(0) {}

    bool solv2(const string& word) const {
        if (wrd.empty()) return static_cast<int>(word.length()) <= maxlen;
        return crrlen + 1 + static_cast<int>(word.length()) <= maxlen;
    }

    void slv1(const string& word) {
        if (wrd.empty()) crrlen = static_cast<int>(word.length());
        else crrlen += 1 + static_cast<int>(word.length());
        wrd.push_back(word);
    }

    void solv3() {
        if (!wrd.empty()) {
            if (wrd.size() == 1) crrlen = 0;
            else crrlen -= (1 + static_cast<int>(wrd.back().length()));
            wrd.pop_back();
        }
    }

    bool isEmpty() const { return wrd.empty(); }
    int getWordCount() const { return wrd.size(); }
};

class WordArrangement {
private:
    vector<string> wrd;
    int lnecnt;
    int maxLen;
    int maxWords;

    void backtrack(vector<Line>& lns, vector<bool>& usd, int crrlne, int wordsPlaced) {
        if (crrlne >= lnecnt) {
            maxWords = max(maxWords, wordsPlaced);
            return;
        }

        for (int i = 0; i < static_cast<int>(wrd.size()); i++) {
            if (usd[i]) continue; 
            if (static_cast<int>(wrd[i].length()) > maxLen) continue; 
            if (lns[crrlne].solv2(wrd[i])) {
                usd[i] = true; lns[crrlne].slv1(wrd[i]); backtrack(lns, usd, crrlne, wordsPlaced + 1); lns[crrlne].solv3(); usd[i] = false;
            }
        }

        if (!lns[crrlne].isEmpty()) {
            backtrack(lns, usd, crrlne + 1, wordsPlaced);
        }
    }

public:
    WordArrangement(const vector<string>& w, int n, int m) : wrd(w), lnecnt(n), maxLen(m), maxWords(0) {}

    int solve() {
        vector<Line> lns(lnecnt, Line(maxLen));
        vector<bool> usd(wrd.size(), false);
        backtrack(lns, usd, 0, 0);
        return maxWords;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<string> wrd(k);
    for (int i = 0; i < k; i++) {
        cin >> wrd[i];
    }

    int n, m;
    cin >> n >> m;

    WordArrangement arr(wrd, n, m);
    cout << arr.solve() << "\n";

    return 0;
}
