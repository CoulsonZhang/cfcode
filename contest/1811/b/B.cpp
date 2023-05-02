/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int func(int n, int x, int y) {
    int one = min(x,y);
    int two = min(n + 1 - x, n + 1 - y);
    return min(one, two);
}

void solve() {
    int n, x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    cout << (abs(func(n ,x1, y1) - func(n, x2, y2))) << '\n';

    
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
