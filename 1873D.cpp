#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int i=0,ans=0;
        while(i<n){
            if(s[i]=='W'){i++;continue;}
            ans++;
            i+=k;
        }
        cout<<ans<<"\n";
    }

    return 0;
}