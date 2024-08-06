#include <bits/stdc++.h>
#define ll long long
#define p(a) cout << a << "\n";

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int L; 
        cin >> L;

       
        int cows = L / 4; 
        int remainingLegs = L - (cows * 4); 
        
        if (remainingLegs % 2 != 0) {
          
            cows--;
            remainingLegs += 4; 
        }
        
       
        int chickens = remainingLegs / 2;
        
        int totalAnimals = cows + chickens;
        p(totalAnimals);

        //n-2/ 4 ;
    }
    return 0;
}
 