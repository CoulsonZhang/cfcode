/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int result[2][n];
    result[0][0] = n * 2;
    result[1][n - 1] = n * 2 - 1;

    int l = 1, r = 2 * n - 2;
    for (int i = 1; i < n; i++) {
        if (i & 1) {result[0][i] = l++; result[1][i - 1] = l++;}
        else {result[1][i - 1] = r--; result[0][i] = r--;}
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << ' ';
        }
        cout << '\n';
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
