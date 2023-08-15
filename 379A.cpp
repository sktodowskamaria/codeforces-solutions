#include<iostream>
using namespace std;
//Coder:MCG
int main(){
    int a,b,x,m;
    cin>>a>>b;
    int ans=a;
    while(a>=b){
        x=a/b;
        ans+=x;
        m=a % b;
        a=x + m;
    }
    cout<<ans;
    return 0;
}
