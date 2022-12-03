#include<stdio.h>

int even_odd(int n,int a[]){
    int i,sum=0;
    for(i=1; i<=n; i++){
        if(i%2==0 && a[i]%2==0)
            sum += (i+a[i]);
        else if(i%2!=0 && a[i]%2!=0)
            sum += (i+a[i]);
    }
    if(sum)
        return sum;
    return 0;
}

int main(){
    int n,s,i;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    s=even_odd(n,a);
    printf("%d",s);
return 0;
}
