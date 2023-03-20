/*
 * Author: czzy
 * Time: 2023-03-19 22:06:41
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn=400005;
ll a[maxn];

void solve() {
		int n;
		cin>>n;
		ll result=0,sum=0;

		for(int i = 1; i <= n*2; i++) {
			cin >> a[i];

			result += abs(a[i]);
			sum += abs(a[i] + 1);
		}
		if (n == 1) {
			result = min(result, abs(a[1]-a[2]));
		} else if (n == 2) {
			result = min(result, abs(a[1]-2) + abs(a[2]-2) + abs(a[3]-2) + abs(a[4]-2));
		} 
        if (n%2 == 0) {
			for(int i = 1; i <= n*2; i++) 
				result = min(result, sum-abs(a[i]-(-1)) + abs(a[i]-n));
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
