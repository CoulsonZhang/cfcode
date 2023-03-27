/*
 * Author: czzy
 * Time: 2023-03-23 15:28:18
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, result = 0;
    string s;
    cin >> n;
    cin >> s;
    int i;
    for (i = 0;i < n; i++) {
        if (s[i] == '1') break;
    }
    for (int j = i + 1; j < n; ++j) {
        if (s[j] != s[j-1]) result ++;
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
