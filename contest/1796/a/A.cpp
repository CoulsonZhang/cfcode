/*
 * Author: czzy
 * Time: 2023-02-28 09:41:15
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string stand = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    int number;
    string sub;
    cin >> number;
    cin >> sub;

    if (stand.find(sub) != string::npos) cout << "YES";
    else cout << "NO";
    cout << '\n';
    // cout << "number: " << number << " String: " << sub;
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