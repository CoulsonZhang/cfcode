/*
 * Author: czzy
 * Time: 2023-03-26 14:27:00
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, d;
    cin >> n >> d;
    vector<int> power (n);
    for (int i = 0; i < n; ++i) cin >> power[i];

    std::sort(power.begin(), power.end(), greater <>());

    int result = 0;
    int end = n;
    for (int i = 0; i < end; ++i) {
        int team = d / power[i] + 1;
        if (i + team > end) break;
        end -= team - 1;
        result ++;
    }
    cout << result << '\n';

    return 0;
}
