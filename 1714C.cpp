#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>ans;
        for(int i=9;i>0;i--){
            if(n>=i){
                ans.push_back(i);
                n-=i;
            }
        }
        for(int j=ans.size()-1;j>=0;j--){
            cout<<ans[j];
        }
        cout<<"\n";
    }
    return 0;
}