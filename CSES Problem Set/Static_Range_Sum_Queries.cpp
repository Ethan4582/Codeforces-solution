#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vl vector<ll>
 
vl psum(const vl &a) {
    vl psum(a.size() + 1);
    for (int i = 0; i < a.size(); ++i) {
        psum[i + 1] = psum[i] + a[i];
    }
    return psum;
}
 
int main() {
    int n, q;
    cin >> n >> q;
    
    vl x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    
    vl p = psum(x);
    
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << "\n";
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std; 


// int mian (){
//    string s; 
// cin>>s; 
// int n=s.size();
// vector < vector< int > > pref(n+1, vector< int> (26));

// for ( int i =0 ; i < n ; i ++){
//    // !prec[4][0]=  occurance of a in 0.... 3; 0->a  1->b
//    //possibilty of the alpahabet  in string so copy
//    pref[i+1]=pref[i];// copy all the chacrter 
//    int char_id = s[i]-'a'; // id like 0..25
//    pref[i+1][char_id]++;
// }

// int q ; 
// cin>>q;
// for ( int i =0 ; i <n;i++){
//    int l ,r; 
//    cin>>l>>r; 
//     char best_id='?';
//     int best_feq=-1; 
//     for( int char_id=0 ;  char_id<n; char_id++){
//       int freq= pref[r+1][char_id]- pref[l][char_id];
//       if ( freq>best_feq){
//          best_feq=freq; 
//          best_id='a'+char_id;

//       }
//     }
//     cout <<best_id<<'\n';
// }

// }
