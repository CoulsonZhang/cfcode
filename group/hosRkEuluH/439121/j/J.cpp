/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto&x:a) cin >> x;

    map<int,int> dp;

    int result = 0, last = 0;

    for (int i = 0; i < n; ++i) {
		int x = a[i];
		dp[x] = dp[x - 1] + 1;
		if (result < dp[x]) {
			result = dp[x];
			last = x;
		}
	}

    vector<int> res;
	for (int i = n - 1; i >= 0; --i) {
		if (a[i] == last) {
			res.emplace_back(i);
			--last;
		}
	}
	reverse(res.begin(), res.end());

    cout << result << '\n';
    for (auto& x:res) cout << x+1 << ' ';
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
