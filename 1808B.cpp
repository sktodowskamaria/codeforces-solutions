#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

#define ll long long int
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll arr[m][n];
        for(ll k=0;k<n;k++){
            for(ll g=0;g<m;g++){
                cin>>arr[g][k];
            }
        }
        ll ans=0;
        for(ll i=0;i<m;i++){
            sort(arr[i],arr[i]+n);
            ll p=0;
            for(int j=0;j<n;j++){
                ans+=(arr[i][j]*j-p);
                p+=arr[i][j];
            }
        }
        /*for(int k=0;k<m;k++){
            for(int g=0;g<n;g++){
                cout<<arr[k][g]<<" ";
            }
            cout<<endl;
        }*/
        cout<<ans<<"\n";
    }
    return 0;
}