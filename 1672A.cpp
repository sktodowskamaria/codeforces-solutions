#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n; cin >> n;
        int arr[51];
        for(int a = 0; a < n; a++) cin >> arr[a];
        int ans = 0;
        for(int k = 0; k < n; k++) ans+=(arr[k] - 1);
        if (ans % 2 == 1) cout << "errorgorn\n";
        else cout << "maomao90\n";
    }
 
    return 0;
}