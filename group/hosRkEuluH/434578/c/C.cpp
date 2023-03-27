/*
 * Author: czzy
 * Time: 2023-03-23 15:57:50
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> mon(n);
    for (int i = 0; i < n; ++i) cin >> mon[i];
    sort(mon.begin(), mon.end());

    ll result = 0, damage = 1;
    for (int i = 0; i < n; ++i) {
        if (i != 0 && mon[i] == mon[i-1] && mon[i] < damage) continue;
        result += mon[i] - damage;
        damage ++;
    }
    cout << result << '\n';
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
