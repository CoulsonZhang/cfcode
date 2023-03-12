/*
 * Author: czzy
 * Time: 2023-03-11 13:59:08
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    cin >> n >> t;
    int arr [n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int curr = 0, start = 0, result = 0;
    for (int end = 0; end < n; end++) {
        // cout << result << '\n';
        curr += arr[end];
        while (curr > t) {
            curr -= arr[start];
            start ++;
        }
        result = max(result, end - start + 1);
    }

    cout << result << '\n';

    return 0;
}
