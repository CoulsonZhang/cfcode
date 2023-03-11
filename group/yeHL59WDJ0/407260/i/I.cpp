/*
 * Author: czzy
 * Time: 2023-02-05 12:53:02
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
    double arr[time];
    for (int i = 0; i < time; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+time);
    double result = 1.0;
    for (int i = 0; i < time; i++) {
        if (arr[i] > i+1) {
            result = -1;
        } else {
            result = (result < 0) ? -1 : min(result, arr[i] / (i+1));
        }
    }
    cout << result;


    return 0;
}
