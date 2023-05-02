/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a,b; cin >> a >> b;
    if (a == b) cout << "0 0\n";
    else {
        ll g = abs(a-b);
        ll time = min(a%g, g - a%g);
        cout << g << ' ' << time << '\n';
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
