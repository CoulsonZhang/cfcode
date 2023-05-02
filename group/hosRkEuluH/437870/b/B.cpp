/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x:a) cin >> x;
    int pos = 0, neg = 0;
    for (auto& x:a) {
        if (x > 0) pos++;
        else neg++;
    }
    for (int i = 1; i <= pos; ++i) {
        cout << i << ' ';
    }
    for (int j = pos-1; j >= pos - neg; --j) {
        cout << j << ' ';
    }
    cout << '\n';

    for (int i = 0; i < neg; ++i) {
        cout << "1 0 ";
    }
    for (int j = 1; j <= pos - neg; ++j) {
        cout << j << ' ';
    }
    cout << '\n';
    
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
