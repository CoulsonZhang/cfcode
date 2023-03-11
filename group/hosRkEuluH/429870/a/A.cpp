/*
 * Author: czzy
 * Time: 2023-02-28 21:48:09
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    x = max(0, x - a);
    y = max(0, y - b);
    if (c >= (x+y)) cout << "YES\n";
    else cout << "NO\n";    
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
