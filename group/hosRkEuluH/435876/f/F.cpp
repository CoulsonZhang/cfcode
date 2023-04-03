/*
 * Author: czzy
 * Time: 2023-03-29 22:58:21
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int birth, dead;
    map<int,int> year;

    for(int i = 0; i < n; i++) {
        cin >> birth >> dead;
        year[birth] ++;
        year[dead] --;
    }

    int number = 0, time = 0, curr = 0;
    for (auto& x : year) {
        curr += x.second;
        if (curr > number) {
            number = curr;
            time = x.first;
        }
    }

    cout << time << ' ' << number;
    return 0;
}
