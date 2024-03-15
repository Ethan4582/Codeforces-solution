#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
   
int n;
    cin >> n;
    
    unordered_map<string, int> team_counts;
    
    for (int i = 0; i < n; ++i) {
        string team;
        cin >> team;
        team_counts[team]++;
    }
    
    string winning_team;
    int max_goals = 0;
    
    for (const auto& entry : team_counts) {
        if (entry.second > max_goals) {
            max_goals = entry.second;
            winning_team = entry.first;
        }
    }
    
    cout << winning_team << endl;
    

    return 0;
}



#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string team1, team2;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; ++i) {
        string team;
        cin >> team;
        if (team == team1) {
            count1++;
        } else if (team == team2) {
            count2++;
        } else if (count1 == 0) {
            team1 = team;
            count1++;
        } else {
            team2 = team;
            count2++;
        }
    }

    string winning_team = (count1 > count2) ? team1 : team2;

    cout << winning_team << endl;

    return 0;
}
