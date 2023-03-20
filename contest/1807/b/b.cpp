/*
 * Author: czzy
 * Time: 2023-03-20 12:25:46
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int x, odd = 0, even = 0;
    while (n--) {
        cin >> x;
        if (x % 2 == 0) even += x;
        else odd += x;
    }

    if (even > odd) cout << "YES\n";
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
