/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ask(int r, int c) {
    // printf("? %d %d\n", r, c);
	// fflush(stdout);
	// scanf("%d", &r);
	// return r;

    cout << "? " << r << " " << c << endl;
    // fflush(stdout);
    int result; cin >> result;
    return result;
}

void give(int x, int y) {
    // printf("! %d %d\n", x, y);
	// fflush(stdout);

    cout << "! " << x << ' ' << y << endl;
    fflush(stdout);
}

void solve() {
    int n, m; cin >> n >> m;
    int a = ask(1, 1);
    int b = ask(n, m);

    int x, y;
    if (a + b == n -1) {
        x = 1 + a;
        y = 1 + ask(x, 1);
    } else if (a + b == m - 1) {
        y = 1 + a;
        x = 1 + ask(1, y);
    } else {
        if (1 + a <= n && m - b >= 1 && ask(1 + a, m - b) == 0) {
            x = 1 + a;
            y = m - b;
        } else {
            x = n - b;
            y = 1 + a;
        }
    }
    // give(x,y);
    cout << "! " << x << ' ' << y << endl;
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
