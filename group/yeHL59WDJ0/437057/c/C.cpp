/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k; cin >> n >> k;
    
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (auto& x:a) {cin >> x; m[x] ++;}
        

    for (ll i = 0; i < k; ++i) {
        bool flag = false;
        unordered_map<ll, ll> update;
        for (ll j = 0; j < n; ++j) {
            if (a[j] != m[a[j]]) {
                a[j] = m[a[j]];
                update[a[j]] ++;
                flag = true;
            }
        }
        if (!flag) break;
        m = update;
    }

    for (auto& x:a) cout << x << ' ';


    return 0;
}
