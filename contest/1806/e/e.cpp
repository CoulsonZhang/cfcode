/*
 * Author: czzy
 * Time: 2023-03-19 23:01:17
**/

#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N=1e5+10;
int a[N],f[N];
map<int ,int >mp[N];
int check(int x,int y){
    if(!x) return 0;
    if(mp[x][y]) return mp[x][y];
    return mp[x][y] = check(f[x],f[y])+a[x]*a[y];
}
signed main(){
    int n,q,x,y;
    scanf("%lld %lld",&n,&q);
    for (int i = 1; i <=n ; ++i) 
        scanf("%lld",&a[i]);
    for (int i = 2; i <=n ; ++i) 
        scanf("%lld",&f[i]);

    while(q--){
        scanf("%lld %lld",&x,&y);
        int ans=0,T=1e3;
        while(T--&&x) 
            ans+=a[x]*a[y],x=f[x],y=f[y];
        ans+= check(x,y);
        printf("%lld\n",ans);
    }
}