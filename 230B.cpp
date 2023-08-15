#include<iostream>
#include<cmath>
using namespace std;
bool check(long long n){
    if(n==0 || n==1) return false;
    for(int j=2;j*j<=n;j++){
        if(n%j==0) return false;
    }
    return true;
}
int main(){
    long long n,x; bool c=true;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>x;
        long long a=sqrt(x);
        if(a*a==x){
            c=check(a);
        }
        else{
            cout<<"NO\n";
            continue;
        }
        if(c==false) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}