/*
 * Author: czzy
 * Time: 2023-03-20 16:56:17
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int m,n, x1, x2, y1, y2;
    string dir;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    cin >> dir;
    x1 --; x2--; y1 --; y2 --;
    int d = 0; //大学问
    if (dir[0] == 'U') d ++;  // upper is always even
    if (dir[1] == 'R') d += 2; 


    bool vis[n][m][4];
    memset(vis, false, sizeof(vis));
    int i = x1, j = y1;
    int bounces = 0;
    while (!vis[i][j][d]) {
        if (i == x2 && j == y2) {   //find the destination
            cout << bounces << '\n';
            return;
        }

        int na = 0;
        if(d%2 == 1 && i == 0){ //upper direction hit upper bound -> downward with same horizontal direction
            d -= 1;
            na ++;
        }

        if(d%2 == 0 && i == n-1){ //downward hit lower -> upward with same horizontal direction
            d += 1;
            na ++;
        }
        if(d >= 2 && j == m-1){ // right ward hit right bound -> go left with same vertical direction
            d -= 2;
            na ++;
        }
        if(d < 2 && j == 0){ // left ward hit left bound -> go right with same vertical direction
            d += 2;
            na ++;
        }

        bounces += min(1, na); // hit corner means hit two bounds at same time, which count only one bounce

        if(vis[i][j][d]) //get in exact same position visited before
            break;

        vis[i][j][d] = true; //mark visited
        if(d%2 == 1){i--;}else{i++;} //odd d is going down, otherwise 
        if(d >= 2){j++;}else{j--;} // larger d is going right else left
    }
    cout << -1 << endl;
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
