


#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; i++)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    vector<pair<int, int>> cards(n); 
    
    
    for (int i = 0; i < n; ++i) {
        int ai, bi;
        cin >> ai >> bi;
        cards[i] = {ai, bi};
    }
    //custom sorting in sorted order base on the calue b 
    sort(cards.begin(), cards.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first > b.first;
    });
    
    int counter = 1;
    int points = 0; 
    
    // Simulate playing cards and sum up the points
    for (int i = 0; i < n; ++i) {
        if (counter == 0) break; 
        points += cards[i].first; 
        counter--; 
        counter += cards[i].second; 
    }
    
    cout << points << "\n"; 
    
    return 0;
}




#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 10000000

using namespace std;

bool cmp(pp a, pp b)
{
    if(a.second==b.second)
        return a.first>b.first;

    return a.second>b.second;
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,x,sum=0;

    cin>>n;

    pp a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a,a+n,cmp);

    i=0;x=1;
    while(x>0 && i<n)
    {
        x--;
        sum+=a[i].first;
        x+=a[i].second;

        i++;
    }

    cout<<sum;

    return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> cards(n);
    for (auto& [ai, bi] : cards)
        cin >> ai >> bi;
    sort(cards.begin(), cards.end(), [](const auto& a, const auto& b) {
        return a.second != b.second ? a.second > b.second : a.first > b.first;
    });
    int counter = 1, points = 0;
    for (const auto& [ai, bi] : cards) {
        if (counter == 0) break;
        points += ai;
        counter--;
        counter += bi;
    }
    cout << points << "\n";
    return 0;
}
