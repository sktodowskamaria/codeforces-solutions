#include<iostream>
#include<cstring>
#define ll long long int
using namespace std;

int main(){
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll arr[d+1];
    memset(arr,0,sizeof(arr));
    ll ans=0;
    for(ll i=1;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0) arr[i]=1;
        else continue;
    }
    for(ll j=1;j<=d;j++){
        if(arr[j]==1) ans++;
        else continue;
    }
    cout<<ans;
    return 0;
}

