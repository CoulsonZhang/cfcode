/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int zero = 0, one = 0;
    bool flag = true;

    for (int i = 0; i < k; i++) {
        int prev = -1;
        for (int j = i; j < n; j += k) {
            if (s[j] != '?') {
                if (prev != -1 && s[j] - '0' != prev) {
                    flag = false;
                    break;
                }
                prev = s[j] - '0';
            }
        }

        if (prev != -1 && prev == 0) zero ++;
        else if (prev != -1 && prev == 1) one ++;

    }

    if (max(zero, one) > k / 2) flag = false;

    if (flag) cout << "YES\n";
    else cout << "NO\n";
    
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
