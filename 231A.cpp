#include<iostream>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
    int n,p,v,t;
    cin>>n;
    int summ=0;
    f(i,0,n){
        cin>>p>>v>>t;
        if(p+v+t>=2) summ++;
    }
    cout<<summ;
    return 0;
}
