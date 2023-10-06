#include<iostream>
using namespace std;
int main(){
    cin.sync_with_stdio(0);
	cin.tie(0);
    int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
    for(int i=0;i<2;i++){
        int x3, y3, x4, y4;
		cin >> x3 >> y3 >> x4 >> y4;
		if (y3 <= y1 and y4 >= y2) {
			if (x1 >= x3 and x1 <= x4) {
				x1 = x4;
			}
			if (x2 >= x3 and x2 <= x4) { x2 = x3; }
		}
		if (x3 <= x1 and x4 >= x2) {
			if (y1 >= y3 and y1 <= y4) { y1 = y4; }
			if (y2 >= y3 and y2 <= y4) { y2 = y3; }
		}
	}
    

    if(x2>x1 && y2>y1){cout<<"YES\n";}
    else{cout<<"NO\n";}
}

