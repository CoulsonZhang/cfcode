/*
 * Author: czzy
 * Time: 2023-03-27 23:15:50
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (auto& x:a) cin >> x;
    for (auto& x:b) cin >> x;
    int aend = a[n-1];
    int bend = b[n-1];
    for (int i = 0; i < n; ++i) {
        if (a[i] <= aend && b[i] <= bend) continue;
        if (b[i] <= aend && a[i] <= bend) continue;
        cout << "No\n"; 
        return;
    }
    cout << "Yes\n";

    
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
