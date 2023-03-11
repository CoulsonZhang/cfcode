/*
 * Author: czzy
 * Time: 2023-03-01 17:29:09
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int number;
    cin >> number;
    // if (number < 2) {
    //     cout << "number: " << number << '\n' <<  -1 << "?" << -1 << '\n';
    //     return;
    // }
    char input[number + 1];
    for (int i = 1; i <= number; i++) cin >> input[i];

    // cout << "numbecf

    for (int i = 2; i <= number; i++) {
        if (input[i] != input[i-1]) {
            cout << i-1 << " " << i << '\n';
            return;
        }
    }
    cout << -1 << " " << -1 << '\n';
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
