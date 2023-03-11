/*
 * Author: czzy
 * Time: 2023-02-27 22:39:02
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int number;
    cin >> number;
    int input[number], result[number];
    for (int i = 0; i < number; i++) cin >> input[i];
    memset(result, 0, sizeof(result));
    result[0] = input[0];
    bool wrong = false;
    // cout << "check: \n";
    // for (auto& x : result) cout << x << ' ';
    // cout << '\n';
    // for (auto& x : input) cout << x << ' ';
    // cout << "\nend \n";

    for (int i = 1; i < number; i++) {
        if (result[i-1] < input[i] || input[i] == 0) {
            result[i] = result[i-1] + input[i];
            // cout << "check: \n";
            // for (auto& x : result) cout << x << ' ';
            // cout << "\nend \n";
        } else {
            // cout << "here at index: " << i << '\n';

            wrong = true;
            break;
        }
    }
    // cout << "result: \n";
    // for (auto& x : result) cout << x << ' ';
    // cout << "\nend \n";

    if (wrong) cout << -1;
    else for (auto& x : result) cout << x << ' ';
    cout  << '\n';
    // cout  << '\n';
    // cout  << '\n';
    
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
