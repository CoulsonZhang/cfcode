/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll k; cin >> k;
    vector<ll> a;
    while(k) {
        a.emplace_back(k % 9);
        k /= 9;
    }
    
    reverse(a.begin(), a.end());

    for (auto& x: a) 
        cout << (char)(x < 4 ? (x + '0') : (x+ '1'));
    
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
