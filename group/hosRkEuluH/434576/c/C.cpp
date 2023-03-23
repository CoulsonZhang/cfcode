/*
 * Author: czzy
 * Time: 2023-03-22 10:42:29
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() {
    int n;
    cin >> n;
    int arr[1005][5]; 
    int week[5];
    memset(week, 0, sizeof(week));

    for(int i = 0; i < n; i++){
        for(int l = 0; l < 5; l++){
            cin >> arr[i][l];
            if(arr[i][l] == 1){ week[l] += 1; }
        }
    }
    
    bool flag = 0;
    for(int i = 0; i < 5; ++i){
        for(int l = i + 1; l < 5 && !flag; ++l){
            if(week[i] >= n / 2 && week[l] >= n / 2 && !flag){
                int ans = 0;
                for(int j = 0; j < n; j++)
                    if(arr[j][i] == 1 && arr[j][l] == 1)
                        ans++;

                if(week[i] + week[l] - ans >= n)
                    flag = 1;
            }
        }
    }
    if(flag) {cout << "YES\n";}
    else {cout << "NO\n";}
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
