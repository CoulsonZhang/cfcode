/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll func(ll x, ll y, ll n, ll m) {
    if((x == 1 || x == n) && (y == 1 || y == m)) return 2;
    if(x == 1 || x == n || y == 1 || y == m) return 3;
    return 4;
}

void solve() {
    ll n, m; cin >> n >> m;
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << min(func(x1, y1, n, m), func(x2, y2, n, m)) << '\n';

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
