/*
 * Author: czzy
 * Time: 2023-03-27 23:23:23
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int last[50001];

void solve() {

    int day;
    cin >> day;
    vector<vector<int>> play;
    for (int i = 0; i < day; ++i) {
        int num; cin >> num;
        vector<int> tmp(num);
        for (auto& x:tmp) cin >> x;
        for (auto& x:tmp) last[x] = i;
        play.push_back(tmp);
    }

    int result [day];
    memset(result, -1, sizeof(result));

    for (int i = 0; i < day; ++i) {
        for (auto& x : play[i]) {
            if (last[x] == i) result[i] = x;
        }
        if (result[i] == -1) {cout << "-1\n"; return;}
    }

    for (auto& x:result) cout << x <<' ';
    cout << '\n';

    // for(auto&x:play){
    //     for(auto&y:x) cout << y << ' ';
    //     cout << '\n';
    // }
    
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
