#include<iostream>
#include<algorithm>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
 
int main(){
    int ar[4];
    f(i,0,4){
        cin>>ar[i];
    }
    sort(ar,ar+4);
    int ans=0;
    f(i,0,3){
        if(ar[i]==ar[i+1]) ans++;
    }
    cout<<ans;
    return 0;
}