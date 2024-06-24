// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>




// const ll mod = 1e9 + 7;


// using namespace std;


// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         ll n, m;
//         cin >> n >> m;

//         vector<vector<ull>> a(n, vector<ull>(m));

//         // Read the matrix
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cin >> a[i][j];
//             }
//         }

//         bool stabilized = false;

//         // Loop until the matrix is stabilized
//         while (!stabilized) {
//             stabilized = true; // Assume stabilized until proven otherwise

//             // Check each element
//             for (int i = 0; i < n; ++i) {
//                 for (int j = 0; j < m; ++j) {
//                     // Check if a[i][j] is greater than all its neighbors
//                     bool is_max = true;

//                     if ((j > 0 && a[i][j] <= a[i][j - 1]) ||  // Left neighbor
//                         (j < m - 1 && a[i][j] <= a[i][j + 1]) ){// Right neighbor
                     
//                         is_max = false;
//                     }

//                     if (is_max) {
//                         // Decrement the element
//                         a[i][j]--;
//                         stabilized = false; // Matrix is not stabilized yet
//                     }
//                 }
//             }
//         }

//         // Output the stabilized matrix
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cout << a[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long

#define vs vector<string>
#define vpii vector<pair<int, int>>


const ll mod = 1e9 + 7;


using namespace std;

int solve(){
    int n,m;
	cin>>n>>m;
	vector<vector<int>>v(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int mx=-1;
			if(i-1>=0){
				mx=max(mx,v[i-1][j]);
			}
			if(j-1>=0){
				mx=max(mx,v[i][j-1]);
			}
			if(i+1<n){
				mx=max(mx,v[i+1][j]);
			}
			if(j+1<m){
				mx=max(mx,v[i][j+1]);
			}
			if(mx!=-1 && mx<v[i][j]){
				v[i][j]=mx;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<("\n");
	}
}

int main() {
    
    int t ; 
    cin >>t ; 
    while(t--){
solve();
   
  }
    return 0;
}