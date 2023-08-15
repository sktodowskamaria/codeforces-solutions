#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    string c="codeforces";
    while(t--){
        char a;cin>>a;
        int ch=0;
        for(int i=0;i<c.size();i++){
            if(a==c[i]){
                cout<<"YES\n";
                ch=1;
                break;
            }
        }
        if(!ch){cout<<"NO\n";}
    }
    
    return 0;
}