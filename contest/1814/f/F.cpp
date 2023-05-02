/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll inf = 1000000000000000000;
struct Node {
    array<ll, 4> a;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i < n; i += 1) {
        cin >> a[i];
    }
    a[0] = a[n] = inf;
    vector<Node> tree(n << 2);
    function<void(int, int, int, int)> set = [&](int v, int tl, int tr, int p) {
        if (tl == tr) {
            tree[v] = {inf, a[p - 1], a[p], a[p - 1] + a[p]};
        } else {
            if (p <= tm) {
                set(ls, tl, tm, p);
            } else {
                set(rs, tm + 1, tr, p);
            }
            tree[v] = {inf, inf, inf, inf};
            for (int i = 0; i < 4; i += 1) {
                for (int j = 0; j < 4; j += 1) {
                    int k = (i & 1) | (j & 2);
                    int w = (i & 2) and (j & 1);
                    tree[v].a[k] =
                        min(tree[v].a[k],
                            tree[ls].a[i] + tree[rs].a[j] - w * a[tm]);
                }
            }
        }
    };
    for (int i = 1; i <= n; i += 1) {
        set(1, 1, n, i);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i += 1) {
        int k, x;
        cin >> k >> x;
        a[k] = x;
        set(1, 1, n, k);
        set(1, 1, n, k + 1);
        cout << tree[1].a[0] * 2 << "\n";
    }
}
