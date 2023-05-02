/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[200100];
    int interval[200100];
    int b[200100];


    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a+1, a+1+n);

    for (int i = 0; i < q; ++i) {
        int l, r; cin >> l >> r;
        interval[l] ++;
        if (r + 1 <= n) interval[r+1] --;
    }
    int counter = 0;
    for (int i = 1; i <= n; ++i) {
        counter += interval[i];
        b[i] = counter;
    }
    sort(b+1, b+1+n);

    ll result = 0;
    for (int i = 1; i <= n; ++i) {
        result += 1ll * a[i] * b[i];
        // cout << a[i] << ' ' << b[i] << '\n';
    }

    cout << result << '\n';
    


    // ll n, q;
    // cin >> n >> q;
    // priority_queue<ll> queue;
    // priority_queue<ll> fre;
    // unordered_map<ll, ll> m;
    // for (ll i = 1; i <= n; ++i) {
    //     ll x; cin >> x; 
    //     queue.push(x);
    // }
    // for (ll i = 0; i < q; ++i) {
    //     ll a, b;
    //     cin >> a >> b;
    //     for (ll idx = a; idx <= b; ++idx) {
    //         m[idx] ++;
    //     }
    // }
    // for (auto& x:m) {
    //     fre.push(x.second);
    // }
    // ll result = 0;
    // while (!fre.empty()) {
    //     result += fre.top() * queue.top();
    //     fre.pop(); queue.pop();
    // }
    // cout << result << '\n';
    // ;

    return 0;
}
