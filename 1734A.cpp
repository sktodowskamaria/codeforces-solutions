#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        sort(arr,arr+n);
        int ans=1000000000;
        for(int i=2;i<n;i++){
            ans=min(ans,arr[i]-arr[i-2]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}