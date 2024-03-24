#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define rep(i,a,n) for (int i=a;i<n;i++)
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;
int main()
{
    fastread();
    string n ;
    cin>>n ;

    set<char>uniq;

    for(char ch : n){
      uniq.insert(ch);
    }

    int k =uniq.size(); 
    string  d = (k%2==0) ? "CHAT WITH HER!" : "IGNORE HIM!";

    cout << d <<endl ; 
    

    return 0;


}




    // int charCount[128] = {0};
    // for (char ch : inputString) {
    //     charCount[ch]++;
    // }

    // int uniqueCount = 0;
    // for (int i = 0; i < 128; i++) {
    //     if (charCount[i] > 0) {
    //         uniqueCount++;
    //     }
    // }