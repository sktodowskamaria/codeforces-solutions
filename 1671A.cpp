#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    bool c=true;
    cin >> t;
    for(int k=0;k<t;k++){
        string data;
        cin >> data;
        c=true;
        int i=0;
        while(i<data.size()){
            int a=0,b=0;
            if(data[i]=='a'){
                while(data[i]=='a'){
                    a++;
                    i++;
                }
                if(a==1){
                    c=false;
                    break;
                }
            }
            else{
                while(data[i]=='b'){
                    b++;
                    i++;
                }
                if(b==1){
                    c=false;
                    break;
                }
            }
        }
        if(c==false) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}