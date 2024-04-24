#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;


int main() {
    int arr[1001];
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    arr[i]=s[i]-'0';
	}
	int count=1;
	for(int i=0;i<s.size();i++){
	    if(arr[i]==0 && arr[i+1]==0){
	        count++;
	        if(count==7){
	            break;
	        }
	    }else if(arr[i]==1 && arr[i+1]==1){
	        count++;if(count==7){
	            break;
	        }
	    }else if(arr[i]==1 && arr[i+1]==0){
	        count=1;
	    }
	    else if(arr[i]==0 && arr[i+1]==1){
	        count=1;
	    }
	}
	if(count>=7){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}