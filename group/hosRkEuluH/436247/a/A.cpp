/*
 * Author: czzy
 * Time: 2023-03-31 00:01:28
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    if (k > (n + 1) / 2) {cout << "-1\n"; return;}

    vector<string> s(n, string(n, '.'));
    for (int i = 0; i < k; i++)
        s[2 * i][2 * i] = 'R';
    
    for(auto& x:s)
        cout << x << '\n';
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
