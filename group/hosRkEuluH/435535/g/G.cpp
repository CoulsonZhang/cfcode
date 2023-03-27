/*
 * Author: czzy
 * Time: 2023-03-27 16:49:46
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll res = 0;
    while (n>0) {
        if (n % 4 == 2 || n == 4) {res += n / 2; n /= 2;}
        else {++res; --n;}

        if(n <= 0)
            break;
        
        if(n % 4 == 2 || n == 4) {n /= 2;}
        else {--n;}
    }
    cout << res << '\n';
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
