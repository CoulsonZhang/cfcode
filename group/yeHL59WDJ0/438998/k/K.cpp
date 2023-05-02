/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n); 
    for (auto&x :a) cin >> x;
    vector<int> b(n);
    for (auto&x:b) cin >> x;

    int result = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] * 3 < b[i]) {result = i+1; break;}
    }

    cout << result << '\n';
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
