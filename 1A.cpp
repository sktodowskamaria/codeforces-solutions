#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll m,n,a;
    cin >> m >> n >> a;
    ll x = n / a;
    ll y = m / a;
    if (x * a != n) x++;
    if (y * a != m) y++;
    cout << x * y;
    return 0;
}
