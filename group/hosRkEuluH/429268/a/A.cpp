/*
 * Author: czzy
 * Time: 2023-02-24 00:04:52
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
        string input;
        cin >> input;
        int one = 0, zero = 0, result = 0;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '0') zero += 1;
            else one += 1;
        }
        
        result = min(one, zero);
        if (one == zero) result = one - 1;
        cout << result << '\n';
    }
    
    return 0;
}
