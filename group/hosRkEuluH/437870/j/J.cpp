/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<vector<int>> g (2 * n + 2);

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            g[(i + 1) * 2].emplace_back(i * 2 + 1);
            g[i * 2 + 1].emplace_back((i + 1) * 2);
        } else {
            g[i * 2].emplace_back((i + 1) * 2 + 1);
            g[(i + 1) * 2 + 1].emplace_back(i * 2);   
        }
    }

    vector<int> comp(2 * n + 2, -1);
    vector<int> cnt;
    for(int i = 0; i < 2 * n + 2; i++) {
        if(comp[i] != -1) continue;
        int c = 1;
        int cc = cnt.size();
        queue<int> q;
        comp[i] = cc;
        q.push(i);
        while(!q.empty()) {
            int k = q.front(); q.pop();
            for(auto& y : g[k]) {
                if(comp[y] == -1) {
                    c++;
                    comp[y] = cc;
                    q.push(y);
                }
            }
            
        }
        cnt.emplace_back(c);
    }
    for(int i = 0; i <= n; i++) {
        cout << cnt[comp[i * 2]] << ' ';
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
