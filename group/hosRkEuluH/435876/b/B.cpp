/*
 * Author: czzy
 * Time: 2023-03-29 16:52:23
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x:a) cin >> x;
    sort(a.begin(), a.end());

    if (a[0] == a[n-1]) {cout << 1ll * n * (n - 1ll) << '\n'; return;}

    int minm = 0, maxm = 0;
    for (auto& x : a) {
        if (x == a[0]) minm ++;
        else if (x == a[n-1]) maxm ++;
    }

    cout << 2ll * minm * maxm << '\n';
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
