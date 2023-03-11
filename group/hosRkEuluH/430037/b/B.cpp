/*
 * Author: czzy
 * Time: 2023-03-01 17:48:31
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll number;
    cin >> number;
    
    if (number < 4 || number % 2 == 1) {
        cout << -1 << '\n';
        return;
    }

    ll upper, lower;
    upper = number / 4;
    lower = number / 6 + (number % 6 > 0);

    cout << lower << " " << upper << '\n';

    
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
