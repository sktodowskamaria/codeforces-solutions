#include<iostream>
using namespace std;
bool c=false;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        c=false;
        int e,o;
        int arr[n];
        for(int j=0;j<n;j++) cin>>arr[j];
        if(arr[0]%2==0) o=0;else o=1;
        if(arr[1]%2==0) e=0;else e=1;
        for(int k=0;k<n;k++){
            if(k%2==0&&arr[k]%2!=o){
                c=true;
                break;
            }
            else if(k%2==1&&arr[k]%2!=e){
                c=true;
                break;
            }
            else continue;
        }
        if(c==false) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}