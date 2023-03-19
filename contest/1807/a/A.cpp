/*
 * Author: czzy
 * Time: 2023-03-19 12:15:57
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b == c && a - b != c) cout << "+\n";
    else if (a + b != c && a - b == c) cout << "-\n";
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
