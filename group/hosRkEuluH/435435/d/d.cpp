/*
 * Author: czzy
 * Time: 2023-03-26 15:08:07
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int odd = 0, even = 0;
    for (auto& x: nums) {
        if (x&1) odd ++;
        else even++;
    }
    // cout << "even: " << even << " odd: " << odd << '\n';
    if ((even&1) ==0) {cout << "YES\n"; return;}
    sort(nums.begin(), nums.end());
    bool flag = false;

    for (int i = 1; i < n; ++i) {
        if ((nums[i]-nums[i-1]) == 1) {flag = true; break;}
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
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
