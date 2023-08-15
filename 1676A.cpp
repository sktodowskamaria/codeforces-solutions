#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
       string t; cin>>t;
        int i = t[0]+t[1]+t[2];
        int j = t[3]+t[4]+t[5];
        if(i==j) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}