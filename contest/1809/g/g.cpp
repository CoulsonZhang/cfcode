/*
 * Author: czzy
 * Cited from manavspg2
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int modulo = 998244353;
int invs[1000000];
int dp[1000000];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (auto& x : A) cin >> x;
    
    if (A[n - 2] + k >= A[n - 1]) {cout << "0\n"; return 0;}

    invs[0] = 1;
    for (int i = 1; i < 1000000; ++i) 
        invs[i] = (ll)invs[i - 1] * i % modulo;

    dp[0] = invs[n - 1];
 
    ll facinv = 254225240;
    for (int i = 999999; i > 0; --i) {
        invs[i] = invs[i - 1] * facinv % modulo;
        facinv = facinv * i % modulo;
    }
 
    for (int j = 0, nok = 0; j < n - 1; ++j) {
        while (nok < n and A[j] - A[nok] > k)
            ++nok;
        dp[j + 1] = ((ll)dp[nok] * invs[n - 1 - nok] + dp[j]) % modulo;
    }

    cout << to_string(dp[n - 1]) << '\n';

    return 0;
}
