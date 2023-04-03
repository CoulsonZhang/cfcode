
/*
 * Author: czzy
 * Time: 2023-03-30 11:20:18
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    ll result = 0;
    for (int i = 0; i < n-1; ++i) {
        if(s[i]=='1' && s[i+1]=='1') result ++;
    }
    if(s[0]=='1' && s[n-1]=='1') result ++;
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
