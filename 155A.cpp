#include<iostream>
using namespace std;

int main(){
    int ans=0, n; cin>>n;
    int arr[1001];for(int i=0;i<n;i++) cin>>arr[i];
    int best=arr[0],less=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>best){
            ans++;
            best=arr[j];
        }
        else if(arr[j]<less){
            ans++;
            less=arr[j];
        }
        else continue;
    }
    cout<<ans;
    return 0;
}