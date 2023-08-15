#include<bits/stdc++.h>
#define N 100005
#define ll long long int
using namespace std;
 
ll n,m,d[N],dp[N],p[N];
 
ll f(ll x){
    if(x>100000) 
        return 0;
    if(dp[x]!=-1)
        return dp[x];
    ll a=f(x+2)+p[x];
    ll b=f(x+1);
    dp[x]=max(a,b);
    return dp[x];
}
int main(){
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>d[i];
        p[d[i]]+=d[i];
    }
    cout<<f(1);
}