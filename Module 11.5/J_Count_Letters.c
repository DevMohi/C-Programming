#include<stdio.h>
#include<string.h>

//10*7 char declare kora jaina 
int main(){
    char c;
    int cnt[26] = {0};
    while(scanf("%c",&c) != EOF){
        int val = c - 'a';
        cnt[val]++;
    }

    for(int i='a'; i<='z'; i++){
        if(cnt[i- 'a'] > 0){
            printf("%c : %d\n",i,cnt[i- 'a']);
        }
    }

    return 0;
}