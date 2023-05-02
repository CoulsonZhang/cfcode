/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int left = 0, whole = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') left ++;
        if (i > 0 && s[i-1] == '(' && s[i] == ')') whole++;
    }
    cout << 1 + left - whole << '\n';
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
