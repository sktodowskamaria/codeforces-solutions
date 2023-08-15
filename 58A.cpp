#include<bits\stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string n="hello";
    string en="aaaaa";
    int j=4;
    stack<char> stc;
    for(int i=0;i<s.size();i++){
        stc.push(s[i]);
    }
    while(!stc.empty()){
        if(stc.top()==n[j]){
            en[j]=stc.top();
            j--;
        }
        stc.pop();
    }
    if(n==en) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}