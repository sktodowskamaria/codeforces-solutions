#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for(int k = 0; k < t; k++){
        char x,y;
        cin >> x >> y;
        x -= 96;
        y -= 96;
        int ans = (x-1) * 25;
        if(y > x) ans += y-1;
        else ans += y;
        cout << ans << "\n";
    }
    return 0;
}