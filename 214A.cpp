#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int a=0;a*a<n;a++){
        int b=n-a*a;
        if(b*b+a==m) c++;
    }
    cout<<c;
    return 0;
}

