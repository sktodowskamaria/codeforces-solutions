#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    for(int k = 0; k<t; k++){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x-=a;
        y-=b;
        if(x<1 && y<1){
            cout<<"YES\n";
            continue;
        }
        else{
            if (x<0) x=0;
            if (y<0) y=0;
            int tot = x+y;
            tot-=c;
            if(tot<1){
                cout<<"YES\n";
                continue;
            }
            else {
                cout<<"NO\n";
                continue;
            }
        }
    }
    return 0;
}