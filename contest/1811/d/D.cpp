/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int fib[50];

void func() {
	fib[0] = fib[1] = 1;
	for (int i = 2; i < 50; ++i)
		fib[i] = fib[i - 2] + fib[i - 1];
}

bool solve(int n, int x, int y) {
	if (n == 1) return true;
	if (fib[n - 1] <= y && y < fib[n])
		return false;
	if (fib[n] <= y)
		y -= fib[n];
	return solve(n - 1, y, x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    func();

    int time;
    cin >> time;
    for(int i = 0; i < time; i++) {
        int n, x, y; 
        cin >> n >> x >> y;
        if (solve(n, --x, --y)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
