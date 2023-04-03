/*
 * Author: czzy
 * Time: 2023-03-29 22:44:14
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    ll result = n;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) result += i;
    }

    cout << result << '\n';
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
