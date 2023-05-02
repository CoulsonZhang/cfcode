/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b; cin >> a >> b;
    ll result = a + b;
    for (ll i = 1; i < 100000; ++i) {
        result = min(result, i + 1 + (a - 1) / i + (b - 1) / i);
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
