/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s; cin >> s;
    if (s.size() % 2 == 1) {cout << "-1\n"; return 0;}

    int hor = 0, ver = 0;
    for (auto& x:s) {
        if (x == 'R') hor ++;
        else if (x == 'L') hor --;
        else if (x == 'U') ver ++;
        else ver--;
    }
    cout << (abs(hor) + abs(ver)) / 2 << '\n';

    return 0;
}
