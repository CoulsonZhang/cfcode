/*
 * Author: czzy
 * Time: 2023-02-05 12:17:10
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
    vector<int> x(time);
    vector<int> y(time);

    for (int i = 0 ; i < time; i ++ ) {
        cin >> x[i] >> y[i];
    }

    auto cal = [&] (vector <int>& a) {
    stack <pair <ll, int>> s;
    for (int i = 0; i < time; i++) {
        pair <ll, int> now = make_pair(a[i], 1);
        while (!s.empty() && s.top().first * now.second > now.first * s.top().second) {
            pair <ll, int> t = s.top(); 
            s.pop();
            now.first += t.first;
            now.second += t.second;
        }
        s.push(now);
    }
    double res = 0.0;
    int id = time - 1;
    while (!s.empty()) {
        pair <ll, int> t = s.top(); s.pop();
        double ave = 1.0 * t.first / t.second;
        for (int i = id; i > id - t.second; i--) {
            res += (a[i] - ave) * (a[i] - ave);
        }
        id -= t.second;
    }
    return res;
    };

    double result = 0.0;
    result += cal(x);
    result += cal(y);
    cout << fixed << setprecision(9);
    cout << result << '\n';

    return 0;
}
