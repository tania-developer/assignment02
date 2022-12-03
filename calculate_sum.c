#include<stdio.h>

int main(){
    int n,i,sum=0,count=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        count++;
        if(count<=3)
            sum+=i;
        else if(count==4 || count==5)
            sum-=i;
        else if(count == 6){
            sum-=i;
            count = 0;
        }
    }
    printf("%d",sum);
return 0;
}
