



#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define rep(i,a,n) for (int i=a;i<n;i++)
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;
void solve(){
   int h ,m ; char c;
   cin>> h  >> c >>m ;
   string k = (h<12 ? "AM":"PM"); 
   h=(h%12? h%12 : 12);  
   cout << (h <10 ? "0": "")<< h<<c << (m<10? "0":"")<< m << " "<< k <<endl ;


}


int main()
{
    fastread();
    int n ;
    cin>>n ;
    while (n--){
      solve();
    }

    return 0;


}




// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n;
//     cin >> n;
//     while (n--) {
//         string time;
//         cin >> time;
//         int hour = stoi(time.substr(0, 2));
//         int minute = stoi(time.substr(3, 2));
        
//         if (hour >= 12) {
//             if (hour > 12) {
//                 hour -= 12;
//             }
//             cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " PM" << endl;
//         } else {
//             if (hour == 0) {
//                 hour = 12;
//             }
//             cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " AM" << endl;
//         }
//     }
//     return 0;
// }


