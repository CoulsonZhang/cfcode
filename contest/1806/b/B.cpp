/*
 * Author: czzy
 * Time: 2023-03-19 21:47:24
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int zero = 0, n = 0, num = 0;
    bool flag = false;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> num;
        if (num == 0) zero ++;
        else if (num >= 2) flag = true;
    }

    if (zero <= (n+1) / 2) cout << "0\n";
    else if (flag || zero == n) cout << "1\n";
    else cout << "2\n";
    
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
