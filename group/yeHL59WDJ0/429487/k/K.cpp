/*
 * Author: czzy
 * Time: 2023-02-26 13:12:36
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    int time;
    cin >> time;
    int total = 0, result = 0;
    map<string, int> group;
    vector<string> flag;
    while (time --) {
        string type, fit;
        int number;
        cin >> type >> fit >> number;
        total += number;
        if (fit == "any") flag.push_back(type);
        else {
            if (group.find(type) == group.end()) group[type] = number;
            else group[type] = max(number, group[type]);
        }
        // cout << "type: " << type << " fit: " << fit << " number: " << number << '\n';
    }

    for (auto& x : group) result += x.second;
    for (auto& y : flag) {
        // cout << "Y.first: " << y.first << " ";
        if (group.find(y) == group.end()) result += 1;
    }
    // cout << '\n';

    result += 1;

    if (result >= total) cout << "impossible" << '\n';
    else cout << result << '\n';

    return 0;
}
