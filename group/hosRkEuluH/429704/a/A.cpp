/*
 * Author: czzy
 * Time: 2023-02-27 18:21:26
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<char,char> m;
    m['U'] = 'D';
    m['D'] = 'U';



    int time;
    cin >> time;
    
    while (time--) {
        int number;
        cin >> number;
        char input[number];
        for (int i = 0; i< number; i++) {
            cin >> input[i];
        }

        for (auto& x:input) {
            if (x == 'U') cout << 'D';
            else if (x == 'D') cout << 'U';
            else cout << x;
        }
        cout << '\n';


        // cout << "Here: \n";
        // for (auto& x: input) cout << x << ' ';
        // cout << '\n';
    }
    return 0;
}
