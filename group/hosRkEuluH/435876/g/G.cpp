/*
 * Author: czzy
 * Time: 2023-03-29 23:21:02
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int minm = 0, maxm = int(1e9);
    for (int i = 0; i + 1 < n; ++i) {
        int x = a[i], y = a[i+1];
        int midL = (x + y) / 2, midR = (x + y + 1) / 2;
        if (x < y) maxm = min(maxm, midL);
        if (x > y) minm = max(minm, midR);
    }

    if (minm <= maxm) cout << minm << '\n';
    else cout << "-1\n";
    
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
