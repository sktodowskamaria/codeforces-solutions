#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int ans=l1;
        if(l1>=l2 && l1<=r2) ans=l1;
        else if(l2>=l1 && l2<=r1) ans=l2;
        else ans+=l2;
        cout<<ans<<"\n";
    }
	return 0;
}