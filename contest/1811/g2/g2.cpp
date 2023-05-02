/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 5005, mod = 1e9 + 7;
int n, k, c[N], fac[N];
ll dp[N][2];   

void init_fac() {
	fac[0] = 1;
	for (int i = 1; i < N; ++i) fac[i] = 1ll * fac[i - 1] * i % mod;
}
int inv(int x) {
	int y = mod - 2;
	int res = 1;
	while (y) {
		if (y & 1)
			res = 1ll * res * x % mod;
		x = 1ll * x * x % mod;
		y >>= 1;
	}
	return res;
}
int func(int x, int y) {
	if (x < 0) return 1;
	return 1ll * fac[x] * inv(fac[y]) % mod * inv(fac[x - y]) % mod;
}
int main() {
	init_fac();
	int T;cin >> T;
	while (T--) {
		cin >> n >> k;
		for (int i = 1; i <= n; ++i) cin >> c[i];
 
		memset(dp, 0, sizeof(dp));

		dp[0][1] = 1;  
		for (int i = 1; i <= n; ++i){
				int num = 0;
				for (int t = i; t > 0; --t) {
					if (c[t] == c[i]) {
						++num;
						if (num >= k) {
							dp[i][0] = max(dp[i][0], dp[t - 1][0] + 1);
							if (dp[t - 1][0] < dp[i][0] - 1) break;
							dp[i][1] += 1ll * dp[t - 1][1] * func(num - 2, k - 2) % mod;
							dp[i][1] %= mod;
						}
					}
				}
				if (dp[i][0] < dp[i - 1][0])
					dp[i][0] = dp[i - 1][0], dp[i][1] = 0;
				if (dp[i][0] == dp[i - 1][0])
					dp[i][1] += dp[i - 1][1], dp[i][1] %= mod;
			}

		cout << dp[n][1] << '\n';
	}
	return 0;
}