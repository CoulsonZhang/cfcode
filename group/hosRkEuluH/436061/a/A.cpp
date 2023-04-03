/*
 * Author: czzy
 * Time: 2023-03-30 11:12:45
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    ll result = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        result += x;
    }
    cout << abs(result) << '\n';
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
