/*
 * Author: czzy
 * Time: 2023-03-30 16:01:43
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x:a) cin >> x;

    ll sum = 0, negs = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {negs ++; a[i] = -a[i];}
        sum += a[i];
    }

    sort(a.begin(), a.end());
    if (negs & 1) sum -= 2 * a[0];
    cout << sum << '\n';


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
