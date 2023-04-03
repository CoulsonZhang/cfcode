/*
 * Author: czzy
 * Time: 2023-04-03 18:52:49
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll result = 0;
    priority_queue<int> q;
    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        if (num != 0) q.push(num);
        else if (num == 0 && !q.empty()) {result += q.top(); q.pop();}
    }
    cout << result << '\n'; 
    
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
