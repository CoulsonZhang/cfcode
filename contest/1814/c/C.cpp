/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, s1, s2;
    cin >> n >> s1 >> s2;

    int n1 = s1, n2 = s2;
    vector<pair<int, int> > a(n), b(n);
    for (int i = 0; i < n; ++i) {
        if (n1 < n2) {
            a[i] = make_pair(n1, n1 / s1 - 1), n1 += s1;
        } else {
            a[i] = make_pair(n2, 0 - n2 / s2), n2 += s2;
        }
    }
    for (int i = 0; i < n; ++i) cin >> b[i].first, b[i].second = i + 1;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<pair<int, int> >());
    vector<int> A(n1 / s1 - 1), B(n2 / s2 - 1);
    for (int i = 0; i < n; ++i) 
        (a[i].second >= 0 ? A[a[i].second] : B[-1 - a[i].second]) = b[i].second;
    
    cout << A.size(); 
    for (auto x : A) cout << ' ' << x; 
    cout << '\n';

    cout << B.size(); 
    for (auto x : B) cout << ' ' << x; 
    cout << '\n';

    
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
