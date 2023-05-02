/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            cin >> a[i][j];
    
    int least = 0;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            least += (a[i][j] != a[n - 1 - i][n - 1 - j]);
    
    least /= 2;
    // cout << "least: " << least << '\n';

    if (k >= least && (n % 2 == 1 || (k - least) % 2 == 0)) cout << "YES\n";
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
