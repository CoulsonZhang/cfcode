/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, d; cin >> n >> d;
    string s; cin >> s;

    for (int i = 0; i < n; ++i) {
        if (s[i] - '0' >= d) {cout << s[i];}
        else {
             cout << d;
             for (int j = i; j < n; ++j)
                cout << s[j];
            
            cout << '\n'; return;
        }
    }
    cout << d << '\n';
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
