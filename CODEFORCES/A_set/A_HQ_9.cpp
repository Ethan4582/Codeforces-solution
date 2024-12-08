#include <bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int main() {
    fastread();
    string n; 
    getline(cin, n);
    bool found = false;
    for (int i = 0; i < n.size(); i++) {
      if  (n[i]>33 && n[i]<126){
          if (n[i] == 'H' || n[i] == 'Q' || n[i] == '9' ) {
            found = true;
            break;
        }
      }
       
    }
    if (found) YES
    else NO
    return 0;
}
