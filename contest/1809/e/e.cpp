/*
 * Author: czzy
 * Cited from manavspg2
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int num[10010];
int ans[1010][1010];

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++) {cin >> num[i]; sum += num[i];}
        
    for (int i = 0; i <= a + b; i++) {
        int tmp = max(i - b, 0);
        int changes = min(a, i);
        for (int j = 1; j <= n; j++) {
            
            changes -= num[j];
            changes = max(changes, 0);
            changes = max(changes, i - b);
            changes = min(changes, a);
            changes = min(changes, i);
            tmp -= num[j];
            tmp = max(tmp, 0);
            tmp = max(tmp, i - b);
            tmp = min(tmp, a);
            tmp = min(tmp, i);
        }
        for (int j = max(i - b, 0); j <= min(a, i); j++)
            ans[j][i - j] = max(tmp, min(changes, j - sum));
    }
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }

}