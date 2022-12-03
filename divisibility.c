#include<stdio.h>

int is_divisible_by5(int n,int a[]){
    int i,count=0;
    for(i=0; i<n; i++){
        if(a[i]%5==0)
            count++;
    }
    if(count)
        return count;
    return 0;
}

int is_divisible_by3(int n,int a[]){
    int i,count=0;
    for(i=0; i<n; i++){
        if(a[i]%3==0)
            count++;
        if(a[i]%3==0 && a[i]%5==0)
            count--;
    }
    if(count)
        return count;
    return 0;
}

int main(){
    int n,i,s1,s2;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    s1=is_divisible_by5(n,a);
    s2=is_divisible_by3(n,a);

    if(s1+s2)
        printf("%d",s1+s2);
    else
        printf("-1");
return 0;
}
