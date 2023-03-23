/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e6+10,mod=1e9+7;
int a[N];
int cnt[N];

void func(int x) {
	for (int i=2; i*i<=x; i++) {
		int c=0;
		while(x%i == 0) {
			x/=i;
			c++;
		}
		c%=2;
		cnt[i]+=c;
	}
	if(x>1)cnt[x]++;
}

ll helper(ll a, ll k, ll p) {
	ll res = 1;
	while (k) {
		if (k & 1) res = res * a % p;
		k >>= 1;
		a = a * a % p;
	}
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
	ll ans = 1;

	for (int i = 1; i <= n; ++i) cin >> a[i];
	for (int i = 1; i <= n; ++i) func(a[i]);
	for (int i = 1; i < N; ++i)
		if(cnt[i])
			ans=ans * helper(i,min(cnt[i],n-cnt[i]),mod)%mod;

	printf("%lld",ans);
    
}
