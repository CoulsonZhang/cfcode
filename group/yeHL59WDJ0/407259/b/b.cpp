/*
 * Author: czzy
 * Time: 2023-01-29 12:58:39
**/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int times;
    cin >> times;
    while (times--) {
        int number;
        cin >> number;
        int arr[number];
        for (int i = 0; i < number; i++) {
            cin >> arr[i];
        }
        cout << number << "\n";
    }

    return 0;
}
