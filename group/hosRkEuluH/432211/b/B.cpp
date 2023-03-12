/*
 * Author: czzy
 * Time: 2023-03-11 12:06:16
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    if (x > y) swap(x, y);
    if (x != 0 || y == 0 || (n-1)%y != 0) {
        cout << -1 << '\n';
        return;
    }

    for (int i = 2; i <= n; i += y)
        for (int j = 1; j <= y; ++j) 
            cout << i << ' ';
    cout << '\n';
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
