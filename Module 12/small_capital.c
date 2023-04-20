#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];

    scanf("%s",&s);

    int large =0 , small =0;

    for(int i=0; i<strlen(s);i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            small++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            large++;
        }
    }

    printf("%d %d",large,small);

    return 0;
}