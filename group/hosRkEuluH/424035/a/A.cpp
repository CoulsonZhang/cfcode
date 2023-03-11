/*
 * Author: czzy
 * Time: 2023-01-28 11:18:09
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int func(int n, int a, int b, string sequence) {
    if (b >= 0) {
        return n * (a+b);
    } else {


    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int number = 1;
    cin >> number;
    while (number --) {

        int n, a, b;
        cin >> n >> a >> b;
        string sequence;
        cin >> sequence;

        int changes = 0;
        for (int i = 0; i < n-1; ++i) {
            if (sequence[i] != sequence[i+1]) {
                changes += 1;
            }
            // cout << "i: " << i << " sequence[i]: " << sequence[i] << " sequence{i+1]: " << sequence[i+1] << " changes: " << changes << "\n";
        }
        // cout << "\n";
        changes += 1;
        int result = a * n + ( (b >= 0) ? b * n : b * (changes/2 + 1));
        cout << result << "\n";

        // cout << "n: " << n << " a: " << a << " b: " << b << " sequences: " << sequence << " len: " << sequence.size() << "\n";
        // cout << "n: " << pars[0] << " a: " << pars[2] << " b: " << pars[4] << " sequences: " << sequence << "\n";
        // cout << "pars: " << pars << " sequences: " << sequence << "\n";
    }
    return 0;
}
