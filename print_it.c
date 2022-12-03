#include<stdio.h>

int main(){
    int x,y,*p,*q;
    scanf("%d %d",&x,&y);
    p=&x;
    q=&y;
    printf("%d %d",*p,*q);
return 0;
}
