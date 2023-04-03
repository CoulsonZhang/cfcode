/*
 * Author: czzy
 * Time: 2023-03-29 19:03:27
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (s[0] != '9') {
        for (int i = 0; i < n; ++i) cout << 9-(s[i]-'0');
        cout << '\n';
        return;
    }

    bool flag = 0;
    string result;
    for (int i = n - 1; i >= 0; --i) {
        if(s[i]-'0'>1-flag) {
            result.push_back(11-flag-(s[i]-'0')+'0');
            flag = 1;
        } else {
            result.push_back(1-flag-(s[i]-'0')+'0');
            flag = 0;
        }
    }

    for(int i=n-1;i>=0;--i) cout << result[i];
    cout<<'\n';
    
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
