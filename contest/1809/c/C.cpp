/*
 * Author: czzy
 * Time: 2023-03-24 16:16:21
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, -2);
 
    int idx = 0;
    while (k > 0) {
        int window = n - idx;
 
        if (k <= window) {
            arr[idx] = (k - 1) * 2 + 1;
            for (int i = 1; i < k; i++) { arr[idx + i] = -2; }
            k = 0;
        } else {
            arr[idx] = 1000;
            k -= window;
        }
 
        idx++;
    }
 
    for (auto& a : arr)
        cout << a << ' ';

    cout << '\n';
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
