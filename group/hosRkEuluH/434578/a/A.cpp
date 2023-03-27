/*
 * Author: czzy
 * Time: 2023-03-23 15:23:12
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    if (sum == 0) cout << "0\n";
    else if (sum == 4) cout << "2\n";
    else cout << "1\n";
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
