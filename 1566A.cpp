#include<iostream>
#define ll long long int
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        ll n, s; cin >> n >> s;
        if(n % 2 != 0){
            cout<<s/(n - (n / 2))<<endl;
            continue;
        }
        cout<<s / (n - (n / 2 - 1))<<endl;
    }
    return 0;
}