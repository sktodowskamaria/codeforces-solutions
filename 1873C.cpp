#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        char arr[10][10];
        int num[10][10]={1,1,1,1,1,1,1,1,1,1,
                         1,2,2,2,2,2,2,2,2,1,
                         1,2,3,3,3,3,3,3,2,1,
                         1,2,3,4,4,4,4,3,2,1,
                         1,2,3,4,5,5,4,3,2,1,
                         1,2,3,4,5,5,4,3,2,1,
                         1,2,3,4,4,4,4,3,2,1,
                         1,2,3,3,3,3,3,3,2,1,
                         1,2,2,2,2,2,2,2,2,1,
                         1,1,1,1,1,1,1,1,1,1,};
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j]=='.'){continue;}
                ans+=num[i][j];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}