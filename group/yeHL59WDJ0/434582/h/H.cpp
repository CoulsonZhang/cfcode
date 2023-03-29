/*
 * Author: czzy
 * Time: 2023-03-25 14:49:08
**/

#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 20005;

int a[N][2];
int head[N],nex[N],to[N],tot = 0;
int deg[N];
int cnt;

void add(int x,int y) {
    tot ++;
    to[tot] = y;
    nex[tot] = head[x];
    head[x] = tot;
}

void dfs(int u,int fa) {
    int flag = 0;
    for(int i = head[u]; i; i = nex[i]) {
        int v = to[i];
        if(v == fa) continue;
        
        if(deg[u] == 1 && fa == -1) {
            a[v][0] = a[u][0];
            a[v][1] = a[u][1];
        } else if(flag == 0) {
            a[v][0] = a[u][1];
            a[v][1] = ++cnt;
            flag = 1;
        } else {
            a[v][0] = a[u][0];
            a[v][1] = ++cnt;
        }
        dfs(v,u);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 1;i < n;i++) {
        int x,y;
        cin >> x >> y;
        add(x,y);
        add(y,x);
        deg[x]++;
        deg[y]++;
    }
    a[1][0] = ++cnt;
    a[1][1] = ++cnt;
    dfs(1,-1);
    for(int i = 1;i <= n;i++)
        cout << a[i][0] << ' ' << a[i][1] << '\n';

    return 0;
}
