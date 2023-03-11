/*
 * Author: czzy
 * Time: 2023-02-24 16:13:24
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<int> find(int m, int k) {
    vector<int> result(k);
    for (int i = 0; i < k; i++) {
        if ( i <= m - 2) result[i] = i + 2;
        else result[i] = 1;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int time;
    cin >> time;
    while (time --) {
        int k = 0, n = 0, max_d = 0;
        cin >> k >> n;

        for (int i = 1; i < k; i++) {
            vector<int> difference = find(i, k-1);
            if (accumulate(difference.begin(), difference.end(), 0) <= n - 1) max_d = i;
        }
        vector<int> result = find(max_d, k-1);

        int tmp = 1;
        cout << tmp << ' ';
        for (int i = 0; i < k-1; i++) {
            tmp += result[i];
            cout << tmp << ' ';
            // cout << result[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
