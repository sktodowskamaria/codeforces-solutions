#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string word;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>word;
        int len=(int)word.size();
        if(len>10) cout<<word[0]<<len-2<<word[len-1]<<endl;
        else cout<<word<<endl;
    }
    return 0;
}
