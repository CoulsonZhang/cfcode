/*
 * Author: czzy
 * Time: 2023-03-19 22:34:19
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=500005;
const int inf=0x3f3f3f3f;
const int mod=998244353;

int a[maxn];
int f[maxn];


void solve() {
		int n;
		cin >> n;
		for(int i = 1; i <= n-1; i++)
			cin >> a[i];

		f[1]=1;
		for(int i = 1; i <= n-1; i++)
			f[i+1]= 1ll * f[i] * (i-a[i]) % mod;

		int ans=0;
		for(int i = 1; i <= n-1; i++) {
			ans=(1ll * ans * i + (!a[i]) * f[i]) % mod;
			cout << ans << " ";
		}
		cout << "\n";
    
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
