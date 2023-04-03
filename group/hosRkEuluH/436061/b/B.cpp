/*
 * Author: czzy
 * Time: 2023-03-30 11:20:06
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll m,n; cin >> n >> m;

    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; j++)
            cout << ((i % 4 <= 1) != (j % 4 <= 1)) << " \n"[j==m];
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
