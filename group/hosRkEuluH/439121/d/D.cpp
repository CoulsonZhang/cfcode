/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, c; cin >> n >> c;
    ll result = 0;
    priority_queue<int> queue;
    for (int i = 1; i <=n; ++i) {
        int number; cin >> number;
        queue.push(-number-i);
    }

    while (!queue.empty()) {
        int cost = -queue.top(); queue.pop();
        if (cost > c) break;
        result++;
        c -= cost;
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
