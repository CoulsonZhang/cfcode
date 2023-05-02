/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int num;
    int n; cin >> n;
    int ans = 0;
    for(int i=0;i<n;++i)
      cin >> num, ans ^= num;

    cout << (n&1 || !ans ? ans : -1) << '\n';
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
