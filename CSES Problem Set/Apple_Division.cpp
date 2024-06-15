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


// const ll mod = 1e9 + 7;


// using namespace std;

// int main() {
    
//       int k , ansa=0 , ansb=0 ;
//       cin >>k ;
    
//             vector<int> a(k); 
//             for (int i = 0; i < k; ++i) {
//                 cin >> a[i]; 
//             }
//             sort(rall(a));
//             rep( i , 0 ,k ){
//                if ( ansa<=ansb){
//                   ansa+=a[i];
//                }
//                else{
//                   ansb+=a[i];
//                }
//             }

//             ll ans= max(ansa , ansb) - min(ansa , ansb);
//             p(ans);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define int long long int
//generalty all the possible subset 
int findminans(int *arr,int currsum,int totalsum,int i){
    if (i==0)
        return abs((totalsum-currsum) - currsum);

        return min(findminans(arr,currsum+arr[i],totalsum,i-1),findminans(arr,currsum,totalsum,i-1));

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int *arr=new int[n];
    int totalsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalsum+=arr[i];
    }

    cout<<findminans(arr,0,totalsum,n-1)<<endl;
return 0;
}