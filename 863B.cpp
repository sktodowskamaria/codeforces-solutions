#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int x=2*n;
    int arr[x];
    for(int k=0;k<x;k++){cin>>arr[k];}
    sort(arr,arr+x);
    int t=0,ans=INT32_MAX;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            vector<int>p;
            for(int a=0;a<x;a++){
                if(a!=i&&a!=j){p.push_back(arr[a]);}
            }
            t=0;
            for(int h=0;h<p.size();h+=2){
                t+=p[h+1]-p[h];
            }
            ans=min(ans,t);
        }
    }
    cout<<ans;
    return 0;
}