/*
 * Author: czzy
 * Time: 2023-03-30 11:20:11
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    priority_queue<int> q;
    int zero = 0;
    ll result = 0;

    for (int i = 0; i < n; ++i) {
        ll x; cin >> x;
        if (x == 0 && !q.empty()) {result += q.top(); q.pop();}
        else q.push(x);
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
