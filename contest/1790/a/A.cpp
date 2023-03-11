/*
 * Author: czzy
 * Time: 2023-01-27 09:36:06
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> conv(string str) {
    vector<int> result;
    for (int i = 0; i < str.size(); i++) {
        result.push_back(str[i] + '0');
    }
    return result;
}

int func(vector<int> pi, vector<int> num) {
    int result = 0;
    for (int i = 0; i < min(pi.size(), num.size()); i++) {
        if (num[i] != pi[i]) {
            return result;
        }
        result += 1;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> pi;
    pi = conv("314159265358979323846264338327");
    
    int n;
    cin >> n;

    string number;
    int result;

    for (int i = 0; i < n; i++) {
        cin >> number;
        result = func(pi, conv(number));
        cout << result << "\n";
    }

    return 0;
}
