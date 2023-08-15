#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	bool c=true;
	if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0){
		cout<<"YES";
		return 0;
	}
	int i=10;
	while(n>0){
		if(n%i!=7&&n%i!=4){
			c=false;
			break;
		}
		n/=10;
	}
	if(c){cout<<"YES";}
	else{cout<<"NO";}
}