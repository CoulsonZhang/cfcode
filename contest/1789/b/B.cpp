/*
 * Time: 2023-02-25 10:23:57
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(string number) {
    vector<int> v;
    bool flag = false;
    int once = 0;
    for (int i = 0; i < number.length() / 2; i++) {
        if (number[i] != number[number.length() - i -1]) v.push_back(1);
        else v.push_back(0);
    }
    for (int i = 0; i < number.length() / 2; i++) {
        if (v[i] == 1) {
            if (flag == false) {
                flag = true;
                once += 1;
            }
        } else {
            flag = false;
        }

    }

    if (once < 2) return true;
    else return false;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int time;
    cin >> time;
    while (time--) {
        int size = 0;
        string number;
        cin >> size >> number;

        // cout << "size: " << size << " number: " << number << '\n';
        if (check(number)) cout << "Yes" << '\n';
        else cout << "No" << '\n';



    }
    return 0;
}
