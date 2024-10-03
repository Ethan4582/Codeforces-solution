#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input

    while (t--) {
        string s;
        getline(cin, s);
        int cnt1 = 0;
        for (char c : s) {
            if (c == '1') cnt1++;
        }
        int n = s.length();

        if (cnt1 % 4 == 0 && n == (cnt1 / 4 + 1) * (cnt1 / 4 + 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}


import kotlin.math.sqrt

fun check(s: String): Boolean {
    val n = s.length
    val sd = sqrt(n.toDouble()).toInt()
    if (sd * sd != n) return false
    for (i in 0 until sd) {
        for (j in 0 until sd) {
            if (i == 0 || i == sd - 1 || j == 0 || j == sd - 1) {
                if (s[i * sd + j] != '1') return false
            } else {
                if (s[i * sd + j] != '0') return false
            }
        }
    }
    return true
}

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val length = readLine()!!.toInt()
        val s = readLine()!!
        println(if (check(s)) "Yes" else "No")
    }
}
