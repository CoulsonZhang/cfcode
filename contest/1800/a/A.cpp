/*
 * Author: czzy
 * Time: 2023-03-02 09:41:28
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

char input[51];

void solve() {
    int number;
    cin >> number;
    memset(input, '\0', sizeof(input));
    for (int i = 0; i < number; i++) {
        cin >> input[i];
        input[i] = tolower(input[i]);
    }

    // map <char, int> m;
    // m['m'] = 0;
    // m['e'] = 1;
    // m['o'] = 2;
    // m['w'] = 3;

    map <int, char> m;
    m[0] = 'm';
    m[1] = 'e';
    m[2] = 'o';
    m[3] = 'w';
    m[4] = '\n';
    int index = 0;


    for (int i = 0; i < number; i++) {
        // cout << " index: " << index << " input[i]: " << input[i] << '\n';
        if (input[i] == m[index]) {
            
        } else if (i > 0 && input[i] == m[index]) {
            
        } else if (i > 0 && input[i] == m[index+1]) {
            index += 1;
        } else {
            
            cout << "NO\n";
            return;
        }

    }

    if (index >= 3) cout << "YES\n";
    else cout << "NO\n";

    
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
