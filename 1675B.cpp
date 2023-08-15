#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ll t; cin >> t;
    for(ll k = 0; k<t; k++){
        ll n;
        cin >> n;
        bool c=true;
        ll arr[32];
        for(ll i=0; i<n; i++) {
            cin>>arr[i];
        }
        int test[32];
        for(ll i=0; i<n; i++) {
            test[i]= i;
        }
        ll s=n-1;
        ll ans=0;
        while(s!=0){
            while(arr[s]<=arr[s-1]){
                arr[s-1] /= 2;
                ans++;
                if(arr[s]<test[s]){
                    c=false;
                    break;
                }
            }
            if(c==false) break;
            s--;
        }
        if(c==false) cout<<"-1\n";
        else cout<<ans<<"\n";
    }
    return 0;
}