// //#include<brain>
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// ll n,m,k,cnt;
// struct node
// {
// 	bool b=1;
// };
// void anomalous_solve()
// {
// 	cin>>n;
// 	ll a[n+1][n+1];
// 	node b[n+1];
// 	for(int i=1;i<=n;i++)
// 	{
// 		for(int j=1;j<=n;j++)
// 		{
// 			cin>>a[i][j];
// 			if(a[i][j]==1)
// 			{
// 				b[i].b=0;
// 			}
// 			if(a[i][j]==2)
// 			{
// 				b[j].b=0;
// 			}
// 			if(a[i][j]==3)
// 			{
// 				b[i].b=0;
// 				b[j].b=0;
// 			}
// 		}
// 	}
// 	vector<ll>ans;
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(b[i].b)
// 		{
// 			ans.push_back(i);
// 		}
// 	}
// 	cout<<ans.size()<<"\n";
// 	for(auto it:ans){
// 		cout<<it<<" ";
// 	}
// }
// int main()
// {
// 	//	freopen("INPUT.txt","r",stdin);
// 	//  freopen("OUTPUT.txt","w",stdout);
	
// 	ios_base::sync_with_stdio();
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     ll test=1;
//     //cin>>test;
//     for(int pos=1;pos<=test;pos++)
//     	anomalous_solve();
// }




#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<bool> good(n + 1, true);
    vector<vector<int>> result(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> result[i][j];
            if (result[i][j] == 1 || result[i][j] == 3) {
                good[i] = false;
            }
            if (result[i][j] == 2 || result[i][j] == 3) {
                good[j] = false;
            }
        }
    }


    vector<int> good_cars;
    for (int i = 1; i <= n; ++i) {
        if (good[i]) {
            good_cars.push_back(i);
        }
    }

    cout << good_cars.size() << "\n";
    for (int car : good_cars) {
        cout << car << " ";
    }
    cout << "\n";

    return 0;
}
