/*
 * Author: czzy
 * Time: 2023-02-24 17:09:08
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 150005;

void check(vector<int>& candy) {
    for (auto i : candy) {
        cout << i << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int time;
    cin >> time;
    while (time--) {
        // cout << '\n';
        int n = 0, q = 0;
        cin >> n >> q;
        int candy[MAXN];
        memset(candy, 0, MAXN * sizeof(int));
        for (int i = 1; i <= n; i++) {
            cin >> candy[i];
        }
        sort(candy, candy+n);

//Print
        // for (int i = 1; i <= n; i++) {
        //     cout << candy[i] << ' ';
        // }
        // cout << '\n';
        
        for (int i = n; i >= 1; i--) {
            candy[i] += candy[i+1];
        }

//Print
        // for (int i = 1; i <= n; i++) {
        //     cout << candy[i] << ' ';
        // }
        // cout << '\n';

        int maxn = candy[1];

        for (int i = 0; i < q; i++) {
            int val, result;
            int num = 0;
            cin >> val;
            // cout << "val: " << val << '\n';

            if (val > maxn) {
                result = -1;
            }

        for (int i = n; i >= 1; i--) {
            if (candy[i] >= val) {
                result = (n-i+1);
                break;
            }
        }

        cout << result << '\n'; 
        // cout << "val: " << val << " result: " << result << '\n';      
        }


    }
    return 0;
}
