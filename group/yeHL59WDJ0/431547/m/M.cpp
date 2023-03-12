/*
 * Author: czzy
 * Time: 2023-03-12 13:09:01
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int one [n];
    int two [n];
    for (int i = 0; i < n; i++) cin >> one[i];
    for (int i = 0; i < n; i++) cin >> two[i];

    int sum = 0;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j ++) {
            sum += min(abs(one[i]-one[j]), abs(two[i]-two[j]));
            // sum += min(abs(one[i]-one[j]), abs(one[j]-one[i]));
            // sum += min(abs(two[i]-two[j]), abs(two[j]-two[i]));
        }
    }

    cout << sum << '\n';

    // sort(one, one + n, greater<int>());
    // sort(two, two + n, greater<int>());

    // for (auto x : one) cout << x << ' ';
    // cout << '\n';
    // for (auto x : two) cout << x << ' ';
    // cout << '\n';



    return 0;
}
