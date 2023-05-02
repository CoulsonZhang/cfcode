/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e6+10;


void solve() {
    // int ans = 0;
    // int y1, m1, d1, y2, m2, d2;
    // scanf("%d%d%d%d%d%d", &y1, &m1, &d1, &y2, &m2, &d2);

    // int x = y1*10000 + m1 * 100 + d1, y = y2 * 10000 + m2 * 100 + d2;
    // int p1 = lower_bound(a + 1, a + cnt + 1, x) - a;
    // int p2 = upper_bound(a + 1, a + cnt + 1, y) - a;

    // cout << p2 - p1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int a[maxn], cnt=1;

    for(int i = 2000; i < 10000; i++){
        if(i % 4 == 0 && i % 100 != 0 || (i % 400 == 0))days[2] = 29;
        else days[2] = 28;
        for(int j = 1; j <= 12; j++){    
            for(int k = 1; k <= days[j]; k++){
                int x = i * 10000 + j * 100 + k;
                string s = to_string(x);
                if(s.find("202") != s.npos){
                    a[++cnt] = x;
                }
            }
        }
    }

    int time;
    cin >> time;
    for(int i = 0; i < time; i++) {
        int ans = 0;
        int y1, m1, d1, y2, m2, d2;
        scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

        int x = y1*10000 + m1 * 100 + d1, y = y2 * 10000 + m2 * 100 + d2;
        int p1 = lower_bound(a + 1, a + cnt + 1, x) - a;
        int p2 = upper_bound(a + 1, a + cnt + 1, y) - a;

        // printf("%d\n", p2 - p1);
        cout << p2 - p1 << "\n";
    }


    return 0;
}
