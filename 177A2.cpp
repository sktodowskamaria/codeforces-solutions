#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int  arr[n][n];
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
	}
	int bb=0;
	for(int b=n-1;b>=0;b--){
		ans+=arr[b][bb];
        bb++;
	}
	for(int c=0;c<n;c++){
		ans+=arr[x][c];
	}
	for(int d=0;d<n;d++){
		ans+=arr[d][x];
	}
	int mid=arr[x][x];
    ans-=(3*mid);
    cout<<ans;
	return 0;
}