#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int  arr[n-1][n-1];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	if(n==1){
        cout<<arr[0][0];
        return 0;
	}
	int x=(n-1)/2;
	int ans=0;
    for(int a=0;a<n;a++){
		ans+=arr[a][a];
		//cout<<ans;
	}
	for(int b=n-1;b>=0;b--){
		ans+=arr[b][b];
		//cout<<ans;
	}
	for(int c=0;c<n;c++){
		ans+=arr[x][c];
		//cout<<ans;
	}
	for(int d=0;d<n;d++){
		ans+=arr[d][x];
		//cout<<ans;
	}
	int mid=arr[x-1][x-1];
    ans-=(3*mid);
    cout<<ans;
	return 0;
}
