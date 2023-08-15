#include<iostream>
using namespace std;
bool check(int n){
    if(n==0 || n==1) return false;
    for(int j=2;j*j<=n;j++){
        if(n%j==0) return false;
    }
    return true;
}
int main(){
    int n,ans=0,p=0;
    cin>>n;
    for(int i=6;i<=n;i++){
    p=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                if(check(j)==true) p++;
                else continue;
            }
        }
        if(p==2) ans++;
        else continue;
    }
    cout<<ans;
    return 0;
}