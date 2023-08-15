#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[200001];
        for(int j = 0; j < n; j++) cin >> arr[j]; //2 1 4 2 4 1
        int a = 0, b = n-1;
        int a_a = arr[a], b_a = arr[b];
        int ans = 2, lans = 0;
        while (a < b){
            if(a_a > b_a){
                b--;
                b_a+=arr[b];
                ans++;
            }
            else if (b_a > a_a){
                a++;
                a_a+=arr[a];
                ans++;
            }
            else{
                lans += ans;
                ans = 2;
                a++;
                b--;
                a_a = arr[a], b_a = arr[b];
            }
        }
        cout << lans << endl;
    }
    return 0;
}