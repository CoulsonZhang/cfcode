/*
 * Author: czzy
 * Time: 2023-03-20 18:16:19
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] != 1) {cout << "NO\n"; return;}

    ll sum = a[0];
    for (int i = 1; i < n; ++i) {
        if (sum < a[i]) {cout << "NO\n"; return;}
        sum += a[i];
    }
    cout << "YES\n";
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
