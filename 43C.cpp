#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int v[n];int val[n]={0};
    int ans=0;
    int d1=0,d2=0,d3=0;
    for(int h=0;h<n;h++){
        cin>>v[h];
            if(v[h]%3==0){
                d3++;
            }
            else if(v[h]%3==2){
                d2++;
            }
            else{
                d1++;
            }
    }
    //for(int i=0;i<n;i++){cout<<val[i]<<" ";}
    //cout<<d1<<d2<<d3;
    ans+=min(d1,d2);
    ans+=(d3/2);
    cout<<ans;
    return 0;
}