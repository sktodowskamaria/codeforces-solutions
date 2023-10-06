#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        if(s=="abc"){cout<<"YES\n";}
        if(s=="acb"){cout<<"YES\n";}
        if(s=="bac"){cout<<"YES\n";}
        if(s=="bca"){cout<<"NO\n";}
        if(s=="cab"){cout<<"NO\n";}
        if(s=="cba"){cout<<"YES\n";}
    }
}
