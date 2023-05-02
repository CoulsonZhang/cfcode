/*
 * Author: czzy
 * Time: 2023-03-23 10:41:06
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string lights;
    cin >> lights;
    unordered_set<int> s;
    unordered_map<int,int> m;
    int diff = 0;
    for (int i = 0; i < 4; i++) {
        int number = lights[i];
        if (s.find(number) == s.end()) {diff += 1; s.insert(number);}
    }
    if (diff >= 3) {cout << 4 << '\n'; return;}
    if (diff == 1) {cout << -1 << '\n'; return;}
    
    for (int i = 0; i < 4; i++) {
        int number = lights[i];
        m[number] += 1;
    }
    if (m[int(lights[0])] == 2) {cout << 4 << '\n';}
    else {cout << 6 << '\n';}


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
