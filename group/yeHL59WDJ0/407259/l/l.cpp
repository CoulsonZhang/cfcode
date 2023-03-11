#include <bits/stdc++.h>
using namespace std;

#define maxN 100100
using namespace std;
 
long long times[maxN];
 
int main() {
    int numOfTests = 0;
    cin >> numOfTests;
    // cout << "Number of Tests: " << numOfTests << endl;
 
    while (numOfTests--) {
        int n, k;
        cin >> n >> k;
        // cout << "Number of Chests: " << n << endl;
        // cout << "Number of Silver Keys: " << k << endl;
        // cout << "Times: ";
        for (int i = 0; i < n; i++) {
            cin >> times[i];
            // cout << times[i] << " ";
        }
        // cout << endl;
        // sort the times by descending order
        sort(times, times + n, greater<long long>());
 
        // Sanity check array after sorting
        // for (int i = 0; i < n; i++) {
        //     cout << times[i] << "  ";
        // }
        // cout << endl;
 
        long long ans = 0;
        // use golden key to open the remaining chest
        for (int i = k; i < n; i++) {
            ans += times[i];
        }
        // cout << "after open largest k: " << ans << endl;
        // use silver keys to open the largest k chest
        for (int i = 0; i < k; i++) {
            ans = max(ans, times[i]);
        }
        
        
        // cout << "final ans: " << endl;
        cout << ans << endl;
    }
    return 0;
}
