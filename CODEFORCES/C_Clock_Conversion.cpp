#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while (n--) {
        string time;
        cin >> time;
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
        
        if (hour >= 12) {
            if (hour > 12) {
                hour -= 12;
            }
            cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " PM" << endl;
        } else {
            if (hour == 0) {
                hour = 12;
            }
            cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " AM" << endl;
        }
    }
    return 0;
}
