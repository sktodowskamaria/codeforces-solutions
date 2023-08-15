#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    cout<<n<<" ";
    if(n==1){return 0;}
    for(int i=2;i<n;i){
        if(n%i==0){
            cout<<n/i<<" ";
            n/=i;
        }
        else{i++;}
    }
    cout<<1;
    return 0;
}