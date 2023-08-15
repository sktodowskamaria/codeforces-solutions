#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int r;
        cin>>r;
        if(1900<=r) cout<<"Division 1\n";
        else if(1600<=r&&r<1900) cout<<"Division 2\n";
        else if(1400<=r&&r<1600) cout<<"Division 3\n";
        else cout<<"Division 4\n";
    }
    return 0;
}