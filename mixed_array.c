#include<stdio.h>
void prime_num(int n, int *p){
    int i,j,prime=0;
    for(i=1; i<=n; i++){
            int count=0;
        for(j=2; j<*(p+i); j++){
            if(*(p+i)%j==0){
                count++;
                break;
            }
        }
        if(!count && *(p+i)!=1)
            prime=prime+1;
    }
    printf("Prime numbers:%d\n",prime);
}

void avg_int(int n, int *p){
    int i,sum=0;
    double count = 0.0;
    for(i=1; i<=n; i++){
        if(*(p+i)%2==0){
            count++;
            sum+=*(p+i);
        }
    }
    double avg = sum/count;
    printf("Average of all even integers: %.2f",avg);
}

int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    prime_num(n,a);
    avg_int(n,a);
return 0;
}
