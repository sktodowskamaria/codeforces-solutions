#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        int aa,bb,cc;
        aa=(max(b,c)+1)-a < 0 ?0:(max(b,c)+1)-a;
        bb=(max(a,c)+1)-b < 0 ?0:(max(a,c)+1)-b;
        cc=(max(b,a)+1)-c < 0 ?0:(max(b,a)+1)-c;
        cout<<aa<<" "<<bb<<" "<<cc<<" \n";
    }
    return 0;
}