#include <bits/stdc++.h>
using namespace std;
const int add = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<int, int> > spot(n), table(n);
		for (auto& i : spot) cin >> i.first >> i.second;
		for (auto& i : table) cin >> i.first >> i.second;
		sort(spot.begin(), spot.end());
		sort(table.begin(), table.end());
		for (int i = 0; i < n; ++i) {
			cout << n << "\n";
			cout << spot[i].first << ' ' << spot[i].second << '\n';
			cout << spot[i].first << ' ' << i + add << '\n';
			cout << -i - add << ' ' << i + add << '\n';
			cout << -i - add << ' ' << -i - add << '\n';
			cout << table[i].first << ' ' << -i - add << '\n';
			cout << table[i].first << ' ' << table[i].second << '\n';
		}
	}
}