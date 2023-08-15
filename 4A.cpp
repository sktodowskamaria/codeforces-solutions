#include<stdio.h>
int main(){
    short w; scanf("%d",&w);
    if(w%2==0&&w!=2){
        printf("YES");
    }
    else{printf("NO");}
    return 0;
}