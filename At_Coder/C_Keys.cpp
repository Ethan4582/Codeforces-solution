#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m,k;
  cin >> n >> m >> k;
  vector<int> ks(m,0);
  vector<int> r(m,0);
  for(int i=0;i<m;i++){
    int c;
    cin >> c;
    for(int j=0;j<c;j++){
      int a;
      cin >> a;
      a--;
      ks[i]|=(1<<a);
    }
    string s;
    cin >> s;
    if(s=="o"){r[i]=1;}
    else{r[i]=0;}
  }

  int res=0;
  for(int i=0;i<(1<<n);i++){
    bool jud=true;
    for(int j=0;j<m;j++){
      int ok=__builtin_popcount(i&ks[j]);
      if(ok>=k && r[j]==0){jud=false; break;}
      if(ok<k && r[j]==1){jud=false; break;}
    }
    if(jud){res++;}
  }
  cout << res << "\n";
  return 0;
}
