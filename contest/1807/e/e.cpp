/*
 * Author: czzy
 * Time: 2023-03-20 16:06:51
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t,n,a[2000005],pref[2000005];

void solve() {
    cin>>n;
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    ll l = 1, r = n, ans=0;
    while(l <= r){
            ll mid = (l+r)/2;
        cout<<"? "<<(mid - l + 1)<<' ';
        for(ll i = l; i <= mid; i++) {
            cout << i << ' ';
        }
        cout << endl << flush;
        ll x = 0;
        cin >> x;
        if(x == pref[mid] - pref[l-1]){
            l = mid + 1;
        }else {
            r = mid - 1;
            ans = mid;
        }
    }
    cout << "! " << ans << endl << flush;
    
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
