/*
 * Author: czzy
 * Time: 2023-03-11 13:14:03
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; 
    cin >> n;
    int a [n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<bool> dp(n+1, false);
    dp[0] = true;
    for (int i = 1; i <= n; ++i) {
        if (i + a[i] <= n && dp[i-1]) dp[i + a[i]] = true; // on left
        if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1]) dp[i] = true; // on right
    }

    if (dp[n]) cout << "YES\n";
    else cout << "NO\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int time;
    cin >> time;
    for(int i = 0; i < time; i++)
        solve();

    return 0;
}
