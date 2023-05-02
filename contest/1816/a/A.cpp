/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a, b; cin >> a >> b;
    if (a == 1 || b == 1) 
        cout << 1 << '\n' << a << " " << b << '\n';
    else {
        cout << 2 << '\n' << 1 << " " << b-1 << '\n';
        cout << a << " " << b << '\n';
    }  
        
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
