/*
 * Author: czzy
 * Time: 2023-03-29 16:44:59
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<int> a(3);
    for (auto& x:a) cin >> x;
    sort(a.begin(), a.end());
    cout << a[1] << '\n';
    
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
