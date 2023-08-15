#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np,drink;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink=k*l;
    int ans=drink/(nl*n);
    ans=min(ans,min((c*d)/n,p/(np*n)));
    ans=ans>0 ? ans:0;
    cout<<ans;
    return 0;
}
//cout<<ans<<" "<<(c*d)/n<<" "<<p/(np*n);