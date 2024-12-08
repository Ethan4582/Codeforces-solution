#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x, y;
        cin >> x >> y;
        int n = x.size();
        bool res= false ; 
         for(int i= 0; i<n;i++){
            if (x[i]==y[i])continue;
            int mn = min(x[i], y[i]);
            int mx = max(x[i], y[i]);
            if (res){
               x[i]=mx;
               y[i]=mn;
            }
            else{
               y[i]=mx;
               x[i]=mn;
               res =true;
            }
             
           }

           cout <<x <<endl ;
           cout <<y <<endl ;

    }

    return 0;
}
