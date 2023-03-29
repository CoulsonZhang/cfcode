/*
 * Author: czzy
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define INF INT64_MAX
using namespace std;
ll round(ll in){
    ll round = 0;
    if(in%10>=5) 
        round = 10;

    return round + in - in%10; 
}

int main(){
    int n,d;
    cin >> n >> d;

    ll sum[2010];
    sum[0]=0;

    for(int i = 1; i <= n; i++){
        cin >> sum[i];
        sum[i]+=sum[i-1];
    }
    ll f[2010][30];

    for(int i = 1; i <= n; i++)
        f[i][0]=round(sum[i]);
    for(int i = 1; i <= d; i++)
        f[1][i]=round(sum[1]);

    for(int i = 2; i <= n; i++)
        for(int j = 1; j <= d; j++){
            f[i][j]=INF;
            for(int k = 1; k <= i; k++)
                f[i][j]=min(f[i][j], f[k][j-1] + round(sum[i]-sum[k]));
        }
    ll ans=INF;
    for(int i=1;i<=d;i++) 
        ans=min(ans,f[n][i]);

    cout<<ans;
}