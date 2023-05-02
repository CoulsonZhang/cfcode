/*
 * Author: czzy
 * Time: 2023-03-26 13:12:24
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1) {cout << 0 << '\n'; return;}
    
    int zeros = 0, ones = 0;
    int allones = count(s.begin(), s.end(), '1');
    ll ans = 1e18;
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] == '0') zeros += 1;
      if (s[i] == '1') ones += 1;
      int k = zeros + allones - ones;
      if (s[i] == '1') k ++;
      if (s[i + 1] == '0') k++;

      ll cur = (n - k) * (1e12 + 1);
      if (s[i] > s[i + 1]) cur += 1e12;
      ans = min(ans, cur); 
    }
    cout << ans << '\n';
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
