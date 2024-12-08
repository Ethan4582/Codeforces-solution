#include <iostream>
using namespace std;

int main() {
   
    int n, firstHeight;
    cin >> n >> firstHeight;

    
    int minHeight = firstHeight, maxHeight = firstHeight;
    int minPos = 0, maxPos = 0;


    for (int i = 1; i < n; ++i) {
        int height;
        cin >> height;

        
        if (height > maxHeight) {
            maxHeight = height;
            maxPos = i;
        }

       
        if (height <= minHeight) {
            minHeight = height;
            minPos = i;
        }
    }

   
    int minSwaps = maxPos + (n - 1 - minPos) - (minPos < maxPos ? 1 : 0);

  
    cout << minSwaps << endl;

    return 0;
}
