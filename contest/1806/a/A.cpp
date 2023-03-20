/*
 * Author: czzy
 * Time: 2023-03-19 21:40:05
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int y = d - b;
    int x = a + d - b - c;
    if (min(x,y) < 0) cout << "-1\n";
    else cout << x + y << '\n';

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
