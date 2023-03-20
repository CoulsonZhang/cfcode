/*
 * Author: czzy
 * Time: 2023-03-20 15:03:08
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int m[26];
    memset(m, -1, sizeof(m));

    for (int i = 0; i < n; ++i) {
        int number = str[i] - 'a';
        if (m[number] == -1) {
            m[number] = i % 2;
        } else {
            if (m[number] != i % 2) {
                cout << "NO\n"; 
                return;
            }
        }
    }
    cout << "YES\n";
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
