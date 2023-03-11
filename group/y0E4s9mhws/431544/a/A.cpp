/*
 * Author: czzy
 * Time: 2023-03-08 19:39:22
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll one = a * d;
    ll two = b * c;
    if (one == two) cout << 0 << '\n';
    else if (one == 0 || two == 0 || one % two == 0 || two % one == 0) cout << 1 << '\n';
    else cout << 2 << '\n';
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
