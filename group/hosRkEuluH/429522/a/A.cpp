/*
 * Author: czzy
 * Time: 2023-02-25 12:22:53
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int time;
    cin >> time;
    while (time --) {
        int n, result;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        // for (auto x: v) cout << x << ' ';
        // cout << '\n';

        unordered_set<int> s;
        for (int i = n-1; i >= 0; i--) {
            int pre = s.size();
            s.insert(v[i]);
            if (s.size() == pre) break;
            result = i;
        }

        cout << result << '\n';


    }

    return 0;
}
