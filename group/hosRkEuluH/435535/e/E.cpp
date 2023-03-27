/*
 * Author: czzy
 * Time: 2023-03-27 15:50:59
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x:arr) cin >> x;
    if ((n == 3 && arr[1] % 2 == 1) || *max_element(arr.begin() + 1, arr.end() - 1) == 1) {cout << "-1\n"; return;}

    ll result = 0;
    for (int i = 1; i < n - 1; ++i) {
        result += (arr[i] + 1) / 2;
    }

    cout << result << '\n';
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
