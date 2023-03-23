/*
 * Author: czzy
 * Time: 2023-03-22 19:02:33
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k, attack = 0;
    cin >> n >> k;
    vector<pair<int,int>> mon(n);
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> mon[i].first;
    for (int i = 0; i < n; i++) cin >> mon[i].second;
 
    sort(mon.begin(), mon.end());

    // for (int i = 0; i < n; i++) cout << mon[i].first << ' ' << mon[i].second << "\n";
 
    for (int i = 0; i < n; i++) h[i] = mon[i].first;
 
    for (int i = n-2; i >= 0; i--) mon[i].second = min(mon[i+1].second, mon[i].second);
    
 
    while(k > 0) {
        int lastalive = n;
        for (int i = 0; i < n; i++) {
            if (h[i] > k + attack) {lastalive = i; break;}
        }
 
        if(lastalive == n) { 
            cout << "YES\n"; 
            return; 
        }
 
        attack += k;
        k -= mon[lastalive].second;
    }
    cout << "NO\n";
    // cout << "\n";
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
