/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int func(int x) {
    int mx=0,mn=9;
    while(x){
        int v = x % 10;
        mn = min(mn,v), mx = max(mx,v);
        x /= 10;
    }
    return mx - mn;
}

void solve() {
    int l, r; cin >> l >> r;
    int mx = -1,ans = 0;
    for(int i = l; i <= r; i++){
        int val = func(i);
        if(val == 9){cout << i << endl;return;}
        if(val > mx)ans = i, mx = val;
    }
    cout << ans << endl;
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
