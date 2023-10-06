#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m=0;cin>>n;
        long int ans=1;
        int arr[n]; for(int i=0;i<n;i++){cin>>arr[i];}
        for(int i=1;i<n;i++){if(arr[m]>arr[i]){m=i;}}
        arr[m]++;
        for(int i=0;i<n;i++){ans*=arr[i];}
        cout<<ans<<"\n";
    }
    return 0;
}