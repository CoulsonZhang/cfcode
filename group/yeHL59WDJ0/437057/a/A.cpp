/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a = -2, b = 1, c = -14, d = 17;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x; cin >> x;
    if (x <= -3)
        cout << 8 - (x+4) * (x+4) << '\n';
    else if (x <= 2) 
        cout << a * x + b << '\n';
    else
        cout << x * x * x + c * x + d << '\n';


    return 0;
}
