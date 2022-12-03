#include<stdio.h>

void even_sum(int x){
    int h,f,s1,s2,s3,s4;
    f = x/4;
    h = x/2;
    if(f%2!=0){
        s1=f-1;
        s2=h-s1;
        s3=f+3;
        s4=h-s3;

        printf("%d+%d+%d+%d\n",s4,s1,s2,s3);
    }
}

int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
       scanf("%d",&n);
       even_sum(n);

    }
return 0;
}
