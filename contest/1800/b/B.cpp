/*
 * Author: czzy
 * Time: 2023-03-02 10:08:36
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int freq[125];
    memset(freq, 0, sizeof(freq));
    int number, k;
    cin >> number >> k;
    for (int i = 0; i < number; i++) {
        char tmp;
        cin >> tmp;
        ++ freq[int(tmp + 0)];
    }

    int result = 0, possible = 0, add = 0;
    for (int i = 65; i <= 90; i++) {
        // cout << "lower: " << freq[i] << " upper " << freq[i+32] << '\n';
        int common = min(freq[i] , freq[i+32]);
        int big = max(freq[i] , freq[i+32]);
        
        result += common;
        possible = (big - common);
        add = min(k, possible/2);
        result += add;
        k -= add;
        


        // cout << "result: " << result << " possible: " << possible << '\n';
    }

    // cout << "possible: " << possible << " result: " << result << '\n';
    // result += min(k, possible/2);

    cout << result << '\n';


    // for (int i = 0; i < 125; i++) {
    //     if (freq[i] != 0) {
    //         cout << "number of " << char(i - 0) << " is " << freq[i] << '\n';
    //     }
    // }
    // cout << '\n';
    // cout << '\n';
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
