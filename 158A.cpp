#include<iostream>
using namespace std;
int n,k,ans=0;
int main(){
    cin>>n>>k;
    k--;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=0;j<n;j++)
        if(arr[j]>=arr[k]&&arr[j]>0) ans++;
    cout<<ans;
    return 0;
}
