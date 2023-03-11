/*
 * Author: czzy
 * Time: 2023-02-28 10:11:10
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string a,b;
    cin >> a >> b;
    // cout << "one: " << a << " two: " << b << '\n';
    int aindex = 0, bindex = 0;
    bool first = a[0] == b[0], last = a[a.size()-1] == b[b.size()-1], prev = false;
    vector<char> same;
    char tmp;
    string result = "";
    while (aindex < a.size() && bindex < b.size()) {
        if (a[aindex] == b[bindex]) {
            if (prev) {
                cout << "YES\n";
                cout << '*' << tmp << a[aindex] << '*' << '\n';
                return;
            } else {
                prev = true;
                tmp = a[aindex];
                same.push_back(a[aindex]);
            }
        } else {
            prev = false;
        }
    }

    if (first || last) {
        cout << "YES\n";
        if (first) cout << a[0];
        for (auto& x:same) cout << '*' << x;
        if (last) cout << a[a.size()-1];
        cout << '\n';
    } else {
        cout << "NO\n";
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
