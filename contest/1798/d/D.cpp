/*
 * Author: czzy
 * Time: 2023-03-28 14:45:10086
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    vector<int> zero(n, 0);
    for (auto&x : a) cin >> x;

    if (a == zero) {cout << "No\n"; return;}

    ll s = 0;
    int i = 0, j = n -1;
    sort(a.begin(), a.end());
    vector<int> result;

    while (i <= j) {
        if (s <= 0) {
            s += a[j];
            result.push_back(a[j--]);
        } else {
            s += a[i];
            result.push_back(a[i++]);
        }
    }

    cout << "Yes\n";
    for (auto& x:result) cout << x << ' ';
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
