/*
 * Author: czzy
 * Time: 2023-03-22 09:57:39
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int b [7];
    for(int i = 0; i < 7; i++) cin >> b[i];

    cout << b[0] << ' ' << b[1] << ' ' << b[6] - b[0] - b[1] << '\n';
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
