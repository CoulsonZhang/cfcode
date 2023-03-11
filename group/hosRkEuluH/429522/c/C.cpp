/*
 * Author: czzy
 * Time: 2023-02-25 15:12:13
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int e = 0;
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == 'U') a += 1;
            if (arr[j] == 'D') b += 1;
            if (arr[j] == 'L') c += 1;
            if (arr[j] == 'R') d += 1;
            if (a == b && c == d) e += 1;
        }
    }
    cout << e << '\n';
    return 0;
}
