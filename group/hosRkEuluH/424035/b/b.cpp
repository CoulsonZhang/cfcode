/*
 * Author: czzy
 * Time: 2023-01-28 20:38:25
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


const int MN = 4e5 + 1;
const ll mod = 1e9 + 7;
bool gone[MN];
vector<int> adj[MN];
int arr[MN][2];

void dfs(int location) {
    gone[location] = true;
    for (auto x : adj[location]) {
        if (!gone[x]) {
            dfs(x);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int times;
        cin >> times;
        for (int i = 1; i <= times; i++) {
            cin >> arr[i][0];
            adj[i] = vector<int>();
            gone[i] = false;
        }
        for (int i = 1; i <= times; i++) {
            cin >> arr[i][1];
        }
        for (int i = 1; i <= times; i++) {
            adj[arr[i][0]].push_back(arr[i][1]);
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        
        ll result = 1;
        for (int i = 1; i <= times; i++) {
            if (!gone[i]) {
                result = result * ll(2) % mod;
                dfs(i);
            }
        }
        cout << result << "\n";
    }

    return 0;
}
