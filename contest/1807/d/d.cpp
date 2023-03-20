/*
 * Author: czzy
 * Time: 2023-03-20 15:32:10
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[200005];
int pref[200005];

void solve() {
    int n, q;
    cin >> n >> q;
    a[0] = 0;
    pref[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }

    for (int i = 0; i < q; ++i) {
        ll l, r, k;
        cin >> l >> r >> k;
        long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
        if (ans & 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
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
