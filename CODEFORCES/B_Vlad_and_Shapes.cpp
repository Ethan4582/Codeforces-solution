/*
Let's draw some examples on paper and notice a pattern. What we notice is that in the case of a triangle there is a row with exactly one 1
, but not a square. So, this is what we need to check.

Iterate through all rows, and check if there is a row with exactly one 1
. If it was the case for at least one, then the answer is "TRIANGLE", and "SQUARE" otherwise.

Another solution. Check if any 2×2
 square has sum 3
. If it does, then we must be at one of the sloped sides of a triangle, so the answer is "TRIANGLE". If there is no such square, the answer is "SQUARE". Why does it work?

*/


#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<string> g;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    }
    bool triangle = false;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(g[i][j] == '1')
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
            triangle = true;
        }
        else if(cnt > 1)
        {
            break;
        }
    }
    reverse(g.begin(), g.end());
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(g[i][j] == '1')
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
            triangle = true;
        }
        else if(cnt > 1)
        {
            break;
        }
    }
    if(triangle)
    {
        cout << "TRIANGLE" << endl;
    }
    else
    {
        cout << "SQUARE" << endl;
    }
}
 
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
 
 