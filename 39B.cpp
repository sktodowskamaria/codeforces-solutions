#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];for(int a=0;a<n;a++){cin>>arr[a];}
    int y=2001,val=1,ans=0;
    vector<int>end;
    for(int i=0;i<n;i++,y++){
        if(arr[i]==val){
            end.push_back(y);
            ans++;
            val++;
        }
    }
    cout<<ans<<"\n";
    for(int j=0;j<end.size();j++){cout<<end[j]<<" ";}
    return 0;
}