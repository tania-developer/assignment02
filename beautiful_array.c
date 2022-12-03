#include<stdio.h>
#include<math.h>
int is_seven(int n, int *p){
    int count=0,l_d,i,m;
    for(i=1; i<=n; i++){
        while(*(p+i)!=0){
            l_d = *(p+i)%10;
            *(p+i) = *(p+i)/10;
            if(l_d==7)
                count++;
        }
    }
    if(n%2==0){
        m=n/2;
        if(count>=m)
            return 1;
        else
            return 0;
    }
    else if(n%2!=0){
        m=ceil(n/2);
        if(count>=m)
            return 1;
        else
            return 0;
    }
}

int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }

    if(is_seven(n,a))
        printf("Beautiful");
    else
        printf("Ugly");
return 0;
}
