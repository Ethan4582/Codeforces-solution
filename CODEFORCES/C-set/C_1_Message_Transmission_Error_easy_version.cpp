#include <bits/stdc++.h>
using namespace std;

int main() {
   
     	string s;
    	cin >> s;
    	int n = s.size();
    	for(int i = 1; i < n; i++){
    		if(s.substr(i, n - i) == s.substr(0, n - i) && i < n - i){
    			cout << "YES"<<endl;
    			cout << s.substr(i, n - i);
    			return 0;
    		}
    	}
    	cout << "NO"<<endl;
   
   return 0;
}
