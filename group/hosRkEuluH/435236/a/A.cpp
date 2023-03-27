/*
 * Author: czzy
 * Time: 2023-03-26 18:16:21
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    char w;
    cin >> w;
    string code = "codeforces";
    if (code.find(w) != string::npos) cout << "YES\n";
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
