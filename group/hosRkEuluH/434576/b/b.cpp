/*
 * Author: czzy
 * Time: 2023-03-22 22:29:49
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, result = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int i = 0; i < n; ++i) result = max(result, arr[(i - 1 + n) % n] - arr[i]);
    for (int i = 0; i < n; ++i) {
        result = max(result, arr[n-1] - arr[i]);
        if (i > 0) result = max(result, arr[i] - arr[0]);
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
