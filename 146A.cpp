#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    string num;cin>>num;
    int li=0,lj=0;
    for(int i=0;i<n/2;i++){
        if(num[i]==52||num[i]==55){
            li+=num[i]-48;
        }
        else{
            li=0;
            break;
        }   
    }
    for(int j=n/2;j<n;j++){
        if(num[j]==52||num[j]==55){
            lj+=num[j]-48;
        }
        else{
            lj=0;
            break;
        }  
    }
    if(li==lj&&li!=0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}