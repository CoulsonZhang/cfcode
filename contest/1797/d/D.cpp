/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// void solve() {
    
// }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m; cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> siz(n);
    vector<ll> sum(n);
    
    vector<vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> parent(n, -1);
    
    vector<set<pair<int, int>>> s(n);

    function<void(int)> dfs = [&](int x) {
        siz[x] = 1;
        sum[x] = a[x];
        for (auto y : adj[x]) {
            if (y == parent[x]) {continue;}

            parent[y] = x;
            dfs(y);
            sum[x] += sum[y];
            siz[x] += siz[y];
            s[x].emplace(-siz[y], y);
        }
    };
    
    dfs(0);
    
    while (m--) {
        int t, x;
        cin >> t >> x;
        x--;
        if (t == 1) {
            cout << sum[x] << "\n";
        } else {
            if (s[x].empty()) {continue;}
            int y = s[x].begin()->second;
            s[parent[x]].erase({-siz[x], x});
            s[x].erase({-siz[y], y});
            siz[x] -= siz[y];
            siz[y] += siz[x];
            sum[x] -= sum[y];
            sum[y] += sum[x];
            s[y].emplace(-siz[x], x);
            s[parent[x]].emplace(-siz[y], y);
            parent[y] = parent[x];
            parent[x] = y;
        }
    }
    
    return 0;
}