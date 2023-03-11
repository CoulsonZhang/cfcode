/*
 * Author: czzy
 * Time: 2023-03-02 10:38:32
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int number;
    cin >> number;
    int input[number];
    
    for (int i = 0; i < number; i++) {
        cin >> input[i];
    }

    // for (auto& x: input) cout << x << ' ';

    priority_queue <pair<int, int>,vector<pair<int, int>>,less<pair<int, int>> > q;
    int result = 0;
    int lastindex = 0;
    int lastzero = 0;
    for (int i = 0; i < number; i++) {
        int x = input[i];
        if (x > 0) {
            q.push(make_pair(x,i)); 
            // cout << "push: " << x << '\n';
        }
        else if (x == 0) {
            pair<int, int> top = q.top();
            // cout << "top: " << q.top().first << '\n';
            // while (!q.empty() && q.top().second > lastindex && q.top().second < lastzero) {
            //     cout << "top first: " << q.top().first << "top second: " << q.top().second << '\n';
            //     q.pop();
            // }


            // result += q.top().first;
            // // lastindex = q.top().second;
            // // lastzero = i;
            // q.pop();
        }
    }

    cout << result << '\n';



    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while (!q.empty()) 
    // {
    //     cout << q.top() << ' ';
    //     q.pop();
    // } 
    // cout << '\n';
    // cout << '\n';

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
