/*
 * Author: czzy
 * Time: 2023-03-26 18:20:17
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool perfect(vector<int>& per) {
    for (int i = 1; i < per.size(); i++) {
        if (per[i-1] + 1 != per[i]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    

    vector<int> per(n + 1);
    vector<int> result(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> per[i];
        result[i] = i;
    }
    if (n == 1) {cout << "-1\n"; return;}

    for (int i = 1; i < n; i++) 
        if (result[i] == per[i]) swap(result[i], result[i+1]);

    if (result[n] == per[n]) swap(result[n], result[n-1]);

    for (int i = 1; i <= n; i++) 
        cout << result[i] << ' ';
    cout << "\n";



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
