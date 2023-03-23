#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 1e6+5,mod=998244353;
char str[N];
int len;
int dp1[64][N];
int dp3[62];
int dp2[62];
int dp0[62];
LL ab[62][62];
LL bab[62][62];
LL ans=0;
LL xb[62];
LL ax[62];
LL tt[62][62];
int helper(int ch){
	if(ch>='0'&&ch<='9'){
		return ch-'0';
	}
	if(ch>='A'&&ch<='Z'){
		return ch-'A'+10;
	}
	return ch-'a'+36;
}
int mp[256];
int main(){
	scanf("%s",str+1);
	len=strlen(str+1);
	for(int i='0';i<='9';++i) {
        mp[i]=helper(i);
    }
	for(int i='A';i<='Z';++i) {
        mp[i]=helper(i);
    }
	for(int i='a';i<='z';++i) {
        mp[i]=helper(i);
    }
	
	for(int i=len; i>=1; --i){
		int c=mp[str[i]];
		for(int j=0;j<62;++j){
			if(c==j)continue;
			dp1[j][i]=dp1[j][i]+bab[c][j];

			if(dp1[j][i]>=mod) {
                dp1[j][i]-=mod;
            }
			bab[j][c]=(bab[j][c]+ab[j][c]);

			if(bab[j][c]>=mod) {
                bab[j][c]-=mod;
            }
			ab[c][j]=ab[c][j]+dp3[j];

			if(ab[c][j]>=mod) {
                ab[c][j]-=mod;
            }
		}
		dp3[c]++;
	}
	
	for(int i=1;i<=len;++i){
		int c=mp[str[i]];
		LL sum=0;
		for(int j=0;j<62;++j){
			if(j!=c){
				sum=(sum+dp0[j]);
				if(sum>=mod)sum-=mod;
			}
		}
		for(int j=0;j<62;++j){
			if(c==j){
				dp0[c]=((LL)dp0[c]+i-1-dp2[c]);
				if(dp0[c]>=mod)dp0[c]-=mod;
				ax[j]=(ax[j]+i-1-dp2[j]);
				if(ax[j]>=mod)ax[j]-=mod;
				continue;
			}
			LL temp=dp1[j][i];
			LL db=(xb[j]-tt[c][j]+mod);
			if(db>=mod) {
                db-=mod;
            }

			xb[j]=(xb[j]+dp2[j]);
			if(xb[j]>=mod) {
                xb[j]-=mod;
            }

			tt[c][j]=(tt[c][j]+dp2[j]);
			if(tt[c][j]>=mod) {
                tt[c][j]-=mod;
            }
			ans=(ans+(sum-xb[c]-ax[j]-db+tt[j][c]+3LL*mod)%mod*temp)%mod;
		}
		dp2[c]++;
	}
	printf("%lld\n",ans%mod);
	return 0;
} 
