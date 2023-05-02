/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, total = 0; cin >> n;
    
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    for (int i = 0 ; i < n ; ++i) {
        total += a[i];
        if (total <= 0) {cout << "NO\n"; return;}
    }
    total = 0;
    for (int i = n -1; i>= 0; --i) {
        total += a[i];
        if (total <= 0) {cout << "NO\n"; return;}
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
