/*
 * Author: czzy
 * Time: 2023-02-25 14:36:08
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
    while (time--) {
        // cout << "one test: \n";
        int n, k, result;
        string end = "";
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        int order = 1, unsorted = n;
        for (auto x :v) {
            if (x == order) {
                order += 1;
                unsorted -= 1;
            }
        }
        result = unsorted / k + (unsorted % k != 0);
        cout <<  result << '\n';

    }
    return 0;
}
