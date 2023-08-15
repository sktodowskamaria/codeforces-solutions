#include<iostream>
using namespace std;

int main(){
    bool c = true;
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        string str;
        cin >> str;
        int r = 0, b = 0, j = 0;
        for(j; j < n; j++){
            c = true;
            r = 0; b = 0;
            while(str[j] != 'W' && j<n){
                if(str[j] == 'R') r++;
                else b++;
                j++;
            }
            if(r >= 1 && b >= 1){continue;}
            else if(r == 0 && b == 0){continue;}
            else{c = false; cout << "NO\n"; break;}
        }
        if(c == true) cout << "YES\n";
    }
    return 0;
}