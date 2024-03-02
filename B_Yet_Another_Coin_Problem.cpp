#include<bits/stdc++.h>
 
using namespace std;
 
int getAns(int n){
    int ans=0;
    ans+=n/15;
    n%=15;
    ans+=n/6;
    n%=6;
    ans+=n/3;
    n%=3;
    ans+=n;
    return ans;
}
 
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
 
    int testcases;
    cin>>testcases;
    for(int i=1;i<=testcases;i++){
        int n;cin>>n;
        if(n<10){
            cout<<getAns(n)<<endl;
        }else if(n<20){
            cout<<min(getAns(n),getAns(n-10)+1)<<endl;
        }else{
            cout<<min({getAns(n),getAns(n-10)+1,getAns(n-20)+2})<<endl;
        }
    }
}

/*
----------This is much faster

- The code defines a function `getAns(n)` to compute the minimum number of coins required for a given value `n`.
- It iteratively computes the number of coins needed for each denomination (15, 6, 3, 1) and returns the total.
- In the main function, it reads the number of test cases and iterates through each case.
- It checks three scenarios:
  1. If `n` is less than 10, it directly outputs the result of `getAns(n)`.
  2. If `n` is between 10 and 19, it compares the results of `getAns(n)` and `getAns(n-10) + 1` (considering the 10 denomination coin).
  3. If `n` is 20 or more, it compares the results of `getAns(n)`, `getAns(n-10) + 1`, and `getAns(n-20) + 2` (considering the 10 denomination coin and the 20 denomination coin).
- It outputs the minimum number of coins required for each test case.



*/

/*

- The code iterates through all possible combinations of coins (1, 3, 6, and 10) to find the minimum number of coins needed to make a given value \( n \).
- It checks if the sum of coins is less than or equal to \( n \).
- It also checks if the remaining amount after subtracting the sum of coins is divisible by 15.
- If both conditions are met, it updates the minimum number of coins required.
- Finally, it outputs the minimum number of coins needed for each test case.



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcases;
    cin >> testcases;
    for (int t = 1; t <= testcases; t++)
    {
        int n;
        cin >> n;
        int ans = 1e9;
        for(int ones = 0; ones <= 2; ones++){
            for(int threes = 0; threes <= 1; threes++){
                for(int sixes = 0; sixes <= 4; sixes++){
                    for(int tens = 0; tens <= 2; tens++){
                        int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
                        if(brute_sum <= n && (n-brute_sum)%15 == 0){
                            ans = min(ans, ones + threes + sixes + tens + (n-brute_sum)/15);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
*/
