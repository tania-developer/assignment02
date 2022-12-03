#include<stdio.h>
#include<string.h>
void string_sort(int l,char s[]){
    int i,temp,max=s[0],j;
    for(i=0; i<l; i++){
       for(j=i+1; j<l; j++){
            if(s[j]>s[i]){
                temp = s[i];
                s[i]= s[j];
                s[j] = temp;
            }
       }
       printf("%c",s[i]);
    }
}

int main(){
    char s[100];
    scanf("%s",s);
    int l = strlen(s);
    string_sort(l,s);
return 0;
}
