#include<stdio.h>
#include<string.h>

void keyboard_output(int l, char s[]){
    int i;
    for(i=0; i<l; i++){
        if(i%2!=0)
            printf("%c%c",s[i],s[i]);
        else
            printf("%c",s[i]);
    }
}

int main(){
    char s[100];
    scanf("%s",s);
    int l = strlen(s);
    keyboard_output(l,s);
return 0;
}
