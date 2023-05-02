/*
 * Author: czzy
 * Time: 2023-03-28 14:45:26
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll gcd(ll a,ll b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a,b);
}


void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    
    ll g = 0, m = 1;
    int result = 1;
    for (int i = 0; i < n; ++i) {
        if (gcd( g, 1ll * a[i] * b[i]) % lcm(m, 1ll * b[i]) != 0) {
            result ++;

            g = 0;
            m = 1;
        }

        g = gcd(g, 1ll * a[i] * b[i]);
        m = lcm(m, 1ll * b[i]);
    }
    
    cout << result << "\n";
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
