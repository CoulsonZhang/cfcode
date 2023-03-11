/*
 * Author: czzy
 * Time: 2023-02-27 22:25:37
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int time;
    cin >> time;
    while(time--) {
        int n, a, b;
        cin >> n >> a >> b;
        int x = (n + a - 1) / a;
        if (a > b) x = 1;
        cout << x << '\n';
    }

    return 0;
}
