/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> b (n-1), a;
    for (auto& x:b) cin >> x;
    a.emplace_back(b[0]);

    for (int i = 0; i < n - 2; ++i) {
        a.emplace_back(min(b[i], b[i+1]));
    }
    a.emplace_back(b[n-2]);
    for (auto& x:a) cout << x << ' ';
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
