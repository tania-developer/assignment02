#include<stdio.h>

void swap(int n,int *p){
    int t,i,temp,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&i,&j);
        temp = *(p+i);
       *(p+i) = *(p+j);
        *(p+j) = temp;
    }
    for(i=1; i<=n; i++){
        printf("%d ",*(p+i));
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    swap(n,a);
return 0;
}
