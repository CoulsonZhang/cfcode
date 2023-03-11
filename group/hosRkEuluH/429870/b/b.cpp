/*
 * Author: czzy
 * Time: 2023-02-28 22:01:03
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void cal(int& hour, int& minute, vector<int>& sleep, vector<int>& alram) {
    int shour = sleep[0], smin = sleep[1];
    int ahour = alram[0], amin = alram[1];

    if (shour == ahour) {
        if (smin == amin) {
            hour = 0, minute = 0;
        } else if (smin < amin) {
            hour = 0, minute = amin - smin;
        } else {
            hour = 23, minute = 60 - (amin - smin);
        }
        
    } else if (shour < ahour) {
        if (smin == amin) {
            hour = ahour - shour, minute = 0;
        } else if (smin < amin) {
            hour = ahour - shour, minute = amin - smin;
        } else { // smin > amin
            // cout << "sim: " << smin << " amin: " << amin << '\n';
            hour = ahour - shour - 1, minute = 60 + (amin - smin);
        }
    } else { // shour > ahour
        hour = ahour + (23 - shour) + (amin + (60 - smin)) / 60;
        minute = (amin + (60 - smin)) % 60;
    }

}

bool static compare(vector<int>& v1, vector<int>& v2) {
    if (v1[0] == v2[0]) return v1[1] < v2[1];
    return v1[0] < v2[0];
}

void solve() {
    int alrams, shour, smin;
    cin >> alrams >> shour >> smin;
    // cout << "number of alarams: " << alrams << " hour: " << shour << " minutes: " << smin << '\n';
    vector<vector<int>> times;
    while (alrams --) {
        int chour, cmin;
        cin >> chour >> cmin;
        times.push_back({chour, cmin});
    }
    times.push_back({shour, smin});

    sort(times.begin(), times.end(), compare);

    int timeindex = 0;

    for (int i = 0; i < times.size(); i++) {
        if (times[i][0] == shour && times[i][1] == smin) {
            timeindex = i;
            break;
        }
    }

    int resulth, resultm;

    if (timeindex < times.size() - 1) {
        cal(resulth, resultm, times[timeindex], times[timeindex + 1]);
    } else {
        cal(resulth, resultm, times[timeindex], times[0]);
    }

    cout << resulth << ' '<< resultm << '\n';    
    
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
