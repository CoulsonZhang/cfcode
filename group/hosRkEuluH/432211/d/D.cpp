/*
 * Author: czzy
 * Time: 2023-03-11 12:28:59
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int time, result = 0;
    cin >> time;
    int arr[time];
    for (int i = 0; i < time; ++i) cin >> arr[i];
    bool two = false;
    for (int i = 0; i < time; ++i) {
        if (arr[i] == i) result += 1;
        else {
            if (arr[arr[i]] == i) two = true;
        }
    }
    result = two ? result + 2 : min(time,result + 1);
    cout << result << '\n';


    return 0;
}
