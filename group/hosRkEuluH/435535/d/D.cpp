/*
 * Author: czzy
 * Time: 2023-03-27 15:32:43
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x:arr) cin >> x;

    if ((n&1) == 0) {cout <<"YES\n"; return;}

    bool possible = false;
    for (int i = 0; i + 1 < n; ++i) 
        if (arr[i] >= arr[i+1]) {possible = true; break;}
    
    if (possible) cout <<"YES\n";
    else cout <<"NO\n";

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
