/*
 * Author: czzy
 * Time: 2023-02-05 12:17:10
**/

#include <bits/stdc++.h>
#define MP make_pair
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
#define Local
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
//head
const int N = 1e5 + 5;
 
void run() {

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    vector <int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    auto gao = [&] (vector <int>& a) {
        stack <pair <ll, int>> s;
        for (int i = 0; i < n; i++) {
            pair <ll, int> now = MP(a[i], 1);
            while (!s.empty() && s.top().fi * now.se > now.fi * s.top().se) {
                pair <ll, int> t = s.top(); s.pop();
                now.fi += t.fi;
                now.se += t.se;
            }
            s.push(now);
        }
        double res = 0.0;
        int id = n - 1;
        while (!s.empty()) {
            pair <ll, int> t = s.top(); s.pop();
            double ave = 1.0 * t.fi / t.se;
            for (int i = id; i > id - t.se; i--) {
                res += (a[i] - ave) * (a[i] - ave);
            }
            id -= t.se;
        }
        return res;
    };

    double ans = 0.0;
    ans += gao(x);
    ans += gao(y);
    cout << ans << '\n';
    return 0;
}