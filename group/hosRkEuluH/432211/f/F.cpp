/*
 * Author: czzy
 * Time: 2023-03-11 12:47:47
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int result = 0;
    for (int i = 0; i <= n / a; i++) {
        for (int j = 0; j <= (n - i * a) / b; j++) {
            if ((n - a * i - b * j) % c == 0) {
                result = max(result, i + j + (n - a * i - b * j) / c);
            }
        }
    }
    cout << result << '\n';

    return 0;
}
