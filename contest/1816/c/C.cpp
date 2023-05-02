/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    if (n%2)
        cout << "YES\n";
    else {
        ll s[] = {0, 0};
        for (int i = 0; i < n; i++)
            s[i%2] += v[i];
        
        if (s[1] < s[0]) cout << "NO\n";
        else cout << "YES\n";
    }

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
