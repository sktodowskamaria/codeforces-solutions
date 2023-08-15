#include<iostream>
#include<cstring>
using namespace std;
bool c=false;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        n++;
        c=false;
        int arr[n];
        memset(arr,0,sizeof(arr));
        int a;
        for(int j=1;j<n;j++){
            cin>>a;
            arr[a]+=1;
        }
        for(int k=1;k<n;k++){
            if(arr[k]>=3){
                c=true;
                cout<<k<<"\n";
                break;
            }
        }
        if(c==false) cout<<"-1\n";
    }
    return 0;
}