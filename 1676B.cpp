#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int s=*min_element(arr,arr+n);
        int ans=0;
        for(int i=0;i<n;i++)  ans+=arr[i]-s;
        cout<<ans<<"\n";
    }
	return 0;
}