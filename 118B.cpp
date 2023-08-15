#include <iostream>
using namespace std;

int turn(int x){
    if(x<0) return x * -1;
    return x;
}

int main(){
    int n;
    cin >> n;
    for (int r = -n; r <= n; ++r){
        int a = n - turn(r);
        for(int i=0; i<turn(r); ++i) cout<<"  ";
        for(int i=0; i<a; ++i) cout<<i<<" ";
        for(int i=a; i>0; --i) cout<<i<<" ";
        cout<<0<<"\n";
    }
    return 0;
}