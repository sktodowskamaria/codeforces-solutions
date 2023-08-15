#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    string str;
    for(int h=0; h<300;h++){
        if(h%3==0){str+="F";}
        if(h%5==0){str+="B";}
    }
    int n; string a;
    while(t--){
        cin>>n>>a;
        cout << (str.find(a) != string::npos ? "YES" : "NO") << endl;
    }
    return 0;
}