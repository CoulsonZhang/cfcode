/*
 * Author: czzy
 * Time: 2023-03-28 23:24:12
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s,t; cin >> s >> t;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R' && t[i] != 'R') {
            cout << "NO\n"; 
            return;
        }
        else if (s[i] != 'R' &&  t[i] == 'R') {
            cout << "NO\n";
            return;
        }
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
