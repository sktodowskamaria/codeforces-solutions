#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    bool c=true;
    cin >> t;
    for(int k=0;k<t;k++){
        string str;
        cin >> str;
        int s = str.size();
        if(s % 2 == 0){
            int ans = 0;
            for(int i = 0; i < s; i++) ans += str[i] - 96;
            cout << "Alice " << ans << "\n";
        }
        else if(s == 1) cout << "Bob " << str[0] - 96 << "\n";
        else{
            int a = 0, b = 0;
            if(str[0] > str[s - 1]){
                for (int i = 0; i < s - 1; i++) a += str[i] - 96;
                b = str[s-1] - 96;
            }
            else{
                for (int i = 1; i < s; i++) a += str[i] - 96;
                b = str[0] - 96; 
            }
            if(a > b) cout << "Alice " << a - b << "\n";
            else cout << "Bob " << b - a << "\n";
        }
    }
    return 0;
}