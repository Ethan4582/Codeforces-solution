#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    // A E I O U Y
    int temp = 1;
    int ans  = 0;
    int length = s.length();
    for(int i = 0 ; i < length ; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
            temp = 1;
        }
        else {
            temp++;
        }
        ans = max(ans,temp);
    }
    cout<<ans;

    return 0;
}
