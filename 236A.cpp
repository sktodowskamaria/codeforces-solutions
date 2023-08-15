#include<iostream>
#include<string>
using namespace std;
int num=0, n=0;
int main(){
    string name;
    cin>>name;
    int a=name.length();
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            if(name[i]==name[j])
                num++;
        }
        if(num==0)
            n++;
        num=0;
    }
    if(n%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}
