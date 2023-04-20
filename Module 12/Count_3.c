#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    scanf("%s",&s);

    int cnt[26] = {0};
    for(int i=0; i<strlen(s); i++){
        int val = s[i] - 'a';
        cnt[val]++;
    }

    for(char i='a'; i<='z'; i++){
        // printf("%c ",i); 
        printf("%c - %d\n",i,cnt[i - 'a']);
    }

    return 0;
}