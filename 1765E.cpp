#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,a,b;cin>>n>>a>>b;
        if(a>n){cout<<1<<"\n";continue;}
        int x=0;
        if(b>=a){
            x=n%a==0?n/a:(n/a)+1;
            cout<<x<<"\n";
        }
        else{cout<<1<<"\n";}
    }
    return 0;
}