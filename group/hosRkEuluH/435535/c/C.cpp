/*
 * Author: czzy
 * Time: 2023-03-27 11:44:42
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    int tmp = arr[0];
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        tmp = gcd(tmp, arr[i]);
    }

    if (tmp == 1) {cout << "0\n"; return;}

    int one = gcd(arr[n-1], n);
    int two = gcd(arr[n-2], n-1);
    if (one == 1 || gcd(tmp, one) == 1) {cout << "1\n"; return;}
    if (two == 1 || gcd(tmp, two) == 1) {cout << "2\n"; return;}
    cout << "3\n";
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
