/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> rec(n + 1);

	for (int i = 1; i <= n; i++) rec[i].second = i;
	cout << "+ " << n + 1 << endl; cout.flush();
	int t1; cin >> t1;
	
	cout << "+ " << n << endl; cout.flush();
	cin >> t1;
	int p,now=-1;

	for (int i = 2; i <= n; i++) {
		cout << "? " << 1 <<" " << i <<endl; cout.flush();
		int tmp; cin >> tmp;

		if (tmp > now) {
			now = tmp;
			p = i;
		}
	}
	rec[p].first = 0;

	for (int i = 1; i <= n; i++) {
		if (i == p) continue;
		cout << "? " << p << " " << i << endl; cout.flush();
		int tmp; cin >> tmp;
		rec[i].first = tmp;
	}

	sort(rec.begin() + 1, rec.end());
	vector<int> a1(n + 1), a2(n + 1);
	
	int s = 1, b = n;
	for (int i = 1; i <= n; i++) {
		if (i & 1) a1[rec[i].second] = b--;
		else a1[rec[i].second] = s++;
	}
	b = n / 2 + 1, s = b - 1;

	for (int i = 1; i <= n; i++) {
		if (n & 1) {
			if (i & 1) 
				a2[rec[i].second] = b++;
			else
				a2[rec[i].second] = s--;
		}
		else {
			if (i & 1) 
				a2[rec[i].second] = s--;
			else 
				a2[rec[i].second] = b++;
		}
	}

	cout << "! ";
	for (int i = 1; i <= n;i++) cout << a1[i] << " ";
	for (int i = 1; i <= n;i++) cout << a2[i] << " ";
	cout << endl; cout.flush();

	int tem; cin >> tem;
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
