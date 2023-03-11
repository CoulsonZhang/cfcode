/*
 * Author: czzy
 * Time: 2023-02-24 01:43:53
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void check(vector<vector<char>>& grid) {
    for (auto x : grid) {
        for (auto y : x) {
            cout << y;
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int time;
    cin >> time;
    while (time --) {
        char result = '.';
        vector<vector<char>> grid(8);
        string input;
        // cin >> input;
        for (int i = 0; i < 8; i++) {
            cin >> input;
            for (auto x: input) grid[i].push_back(x);
        }

        // check(grid);
        // cout << '\n';
        bool flag;

        for (int i = 0; i < 8 ; i++) {
            flag = true;
            for (int j = 0; j < 8; j++) {
                if (grid[j][i] != 'B') flag = false;
            }
            if (flag) break;

        }
        if (flag == true)
            cout << "B\n";
        else
            cout << "R\n";

    }
    return 0;
}
