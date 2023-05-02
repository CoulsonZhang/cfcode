/*
 * Author: czzy
 * Time: 2023-04-01 11:51:29
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> pi = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5};

    int time;
    cin >> time;
    int i = 0, y = 1;
    while(time--) {
        int ans = 1;
        for (int j=0; j<pi[i]; j++) {
            int n; cin>>n;
            ans *= n;
        }
        i++;
        cout << ans <<'\n';
        ans = 1;
    }
}
