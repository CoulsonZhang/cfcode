/*
 * Author: czzy
 * Time: 2023-03-23 11:01:20
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll result = sqrt(n);
    while (result * result < n) result += 1;
    cout << result - 1 << '\n';
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
